def swap_case(s):
    str1=""
    length=len(s)
    list1=list(s)
    for i in range (length):
        if(list1[i].islower()):
            str1=str1+list1[i].upper()
        else:
            str1=str1+list1[i].lower()
    return str1

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)