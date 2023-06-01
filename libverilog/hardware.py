class FPGA:
    def __init__(self):
        pass
    
    def communicate(self, data):
        raise NotImplementedError("Do not use raw FPGA directly.")
    
    def send_circuit(self,circuit_path:str):
        raise NotImplementedError("Do not use raw FPGA directly.")