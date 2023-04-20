import bisect 
if __name__ == '__main__':
    mylist = []
    flag=True
    for i in range(int(input())):
        name = input()
        score = float(input())
        # print("i is ",i,"     mylist is ",mylist)
        # print("Added score and name are ",score," ",name)

        for item in mylist:
            # print("iterating item is ",item)
            if item[0]==score:#'set' object is not subscriptable
                # print('Score is ',score,'\nAnd going to added to item[0]= ',item[0])
                item.append(name)
                flag=False
        if flag:
            # print("I am in flag")
            bisect.insort(mylist,[score,name])
        flag=True
        # print("After for mylist is ",mylist)
    # print("At the end mylist is ",mylist)
    runnerup=mylist[1]
    runnerup=runnerup[1:]
    runnerup.sort()
    for item in runnerup:
        print(item)
#https://www.hackerrank.com/challenges/nested-list/problem?isFullScreen=true
# Test codes are
# 5
# Harry
# 37.21
# Berry
# 37.21
# Tina
# 37.2
# Akriti
# 41
# Harsh
# 39
# Expected outputs are
# Berry
# Harry

              
    