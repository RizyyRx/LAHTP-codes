import socket

#initialize host addr and port no
HOST=""
PORT=9999

#initialize the socket object
s=socket.socket(socket.AF_INET,socket.SOCK_STREAM)

#bind socket object with host addr and port 
s.bind((HOST,PORT))

#listen on specified port
s.listen() 

#returns a new socket object that can be used for comm with the client
#And also with a tuple containing IP addr and port no of the client
conn,client_addr=s.accept()

print("{} connected with port {}".format(client_addr[0],client_addr[1]))

while True:
    data=conn.recv(1024) #rx data with 1024 bytes buffer
    if not data:
        break
    else:
        data=data.decode() #decode message from bytes to str
        print("echo> {}".format(data))
        if data.strip()=="quit":
            break
        else:
            data="echo: "+data
            conn.sendall(data.encode()) #encode msg from str to bytes and send to all
conn.close()
s.close()