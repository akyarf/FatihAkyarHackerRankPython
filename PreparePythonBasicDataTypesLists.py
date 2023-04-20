
if __name__ == '__main__':
    N = int(input())
    list1 = []
    for i in range(N):
        command = list(map(str, input().split()))
        if command[0]=="insert":
            e=int(command[2]) 
            pos=int(command[1]) 
            list1.insert(pos,e)
        elif command[0]=="print":
            print(list1)
        elif command[0]=="remove":
            e=int(command[1]) 
            list1.remove(e)
        elif command[0]=="append":
            e=int(command[1]) 
            list1.append(e)
        elif command[0]=="sort":
            list1.sort()
        elif command[0]=="pop":
            list1.pop()
        elif command[0]=="reverse":
            list1.reverse()