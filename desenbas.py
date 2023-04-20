# Enter your code here. Read input from STDIN. Print output to STDOUT
if __name__ == '__main__':
    N,width=input().split()
    N=int(N)
    width=int(width)
    for i in range((N//2)):
        print(('.|.'*i).rjust(width//2-1,'-')+'.|.'.center(3,'-')+('.|.'*i).ljust(width//2-1,'-'))
        
    print('WELCOME'.center(width,'-'))
    
    for i in range((N//2)):
        t=N//2-1-i
        print(('.|.'*t).rjust(width//2-1,'-')+'.|.'.center(3,'-')+('.|.'*t).ljust(width//2-1,'-'))