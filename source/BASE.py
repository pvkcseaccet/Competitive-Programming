import sys
 
symbol_table=[i.upper() for i in "abcdefghijklmnopqrstuvwxyz"]
 
for line in sys.stdin :
    a = line.split()
    num = a[0]
    base_from = int(a[1])
    base_to = int(a[2])
    num_10 = 0
    prog = 1
    inc = 0
    for i in reversed(num) :
        if ord(i) >=65 :
            i = (ord(i) - 65)+10
        num_10+=((int(i))*(base_from**inc))
        inc +=1
    result = ""
    if base_to != 10 :
        while num_10 > 0 :
            temp=(num_10%base_to)
            if temp >= 10 :
                result+=symbol_table[temp-10]
            else :
                result+=str(temp)
            num_10/=base_to
        ans=""
        for i in reversed(result) :
            ans+=i
        result = ans
    else :
        result+=str(num_10)
    if len(result) > 7 :
        result = "ERROR"
    print str(result).rjust(7)
 
 