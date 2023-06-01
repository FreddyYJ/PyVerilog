from typing import List, Union

import numpy as np
from hardware import FPGA
import serial

class XilinxFPGA(FPGA):
    def __init__(self):
        self.serial=serial.Serial('COM4', 115200)

    def communicate(self, data:Union[bytes,bytearray,np.ndarray],output_size:int):
        if not isinstance(data,np.ndarray) and not isinstance(data,bytearray) and not isinstance(data,bytes):
            raise ValueError(f"data must be bytes, bytearray or np.ndarray, but {type(data)}")
        if isinstance(data,np.ndarray) and data.dtype!=np.uint8:
            raise ValueError(f"data type of ndarray should be np.uint8, but {data.dtype}")
            
        # Write data to FPGA
        self.serial.write(data)
        
        if isinstance(data,np.ndarray) or isinstance(data,bytearray):
            result:List[bytes]=[]
        else:
            result:bytes=b''

        # Read data from FPGA
        # TODO: Get output_size from bitstream
        for _ in range(output_size):
            if isinstance(data,np.ndarray) or isinstance(data,bytearray):
                result.append(self.serial.read())
            else:
                result+=self.serial.read()

        if isinstance(data,np.ndarray):
            return np.array(result)
        else:
            return result
        
    def send_circuit(self,circuit_path:str):
        with open(circuit_path,'rb') as f:
            data=f.read()
        self.communicate(data,0)