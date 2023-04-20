
if __name__ == '__main__':
    N = int(input())
    list1 = []
    for i in range(N):
        command = str(input())
        if command=="insert":
            e=int(input())
            pos=int(input())
            list1.insert(pos,e)
            print("list1 is",list1)
    