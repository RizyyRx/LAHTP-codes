import socket
import subprocess

HOST=""
PORT=9999

s=socket.socket(socket.AF_INET,socket.SOCK_STREAM)

#set socket options
#SOL_SOCKET is the socket option level and is set to socket level
#reuse addr is set to 1 to enable that option
s.setsockopt(socket.SOL_SOCKET,socket.SO_REUSEADDR,1)
s.bind((HOST,PORT))
s.listen()
conn,addr=s.accept()

print("{} connected with port {}".format(addr[0],addr[1]))
conn.sendall("------------SIMPLE COMMAND SERVER------------\n\n$".encode())

while True:
    data=conn.recv(1024)
    if not data:
        break
    else:
        data=data.decode()
        data=data.strip()
        print("cmd> {}".format(data))
        if data=="quit":
            break
        else:

            #subprocess.Popen is used to execute a command in a new process
            #data holds the command that is entered by client
            #stdout=subprocess.PIPE: Redirects the standard output of the command to a pipe, allowing the Python script to capture and process it.
            #shell=True indicates that the command should be executed on the shell, allowing us to use shell functions like |,>,etc....
            #stderr=subprocess.STDOUT redirects the std error to the same std output. error msg will be included in output captured by stdout
            process=subprocess.Popen(data,stdout=subprocess.PIPE,shell=True,stderr=subprocess.STDOUT)

            #communicate() interacts with the process and returns captured output and error
            #err is used when stderr=subprocess.PIPE is used instead of stderr=subprocess.STDOUT
            out,err=process.communicate()
            data=out.decode()
            data=data+"\n$ "
            conn.sendall(data.encode())
conn.close()
s.close()