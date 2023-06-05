import subprocess

def convert(cpp_file:str,verilog_file:str,merge_stderr:bool=False):
    result=subprocess.run(['metron','-c',cpp_file,'-o',verilog_file],stdout=subprocess.PIPE,
                          stderr=subprocess.STDOUT if merge_stderr else subprocess.PIPE)
    
    if merge_stderr:
        return result.returncode==0,result.stdout.decode('utf-8')
    else:
        return result.returncode==0,result.stdout.decode('utf-8'),result.stderr.decode('utf-8')