if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    arr1=list(arr)
    arr1.sort()
    # print(arr1)
    first=arr1.pop(-1)
    # print(arr1)
    while (arr1):
        if arr1[-1]==first:
            arr1.pop()
        else:
            print(arr1[-1])
            break
            
    
    

    