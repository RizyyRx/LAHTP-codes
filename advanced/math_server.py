from subprocess import Popen,PIPE,STDOUT
p=Popen(['bc','-q','-i'],stdin=PIPE,stdout=PIPE,stderr=STDOUT)

while True:
    query=input('> ')
    if query=='q':
        print("quitted...")
        break
    query=query+'\n'
    p.stdin.write(query.encode())
    p.stdin.flush()
    print(p.stdout.readline().decode().strip())
    print(p.stdout.readline().decode().strip())
