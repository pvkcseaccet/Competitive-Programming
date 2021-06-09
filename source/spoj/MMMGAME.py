import sys
 
for __ in range(input()) :
    n = input()
    lists = list(map(int,sys.stdin.readline().split()))
    tgt = sum(lists)
    if tgt is n :
        if not tgt & 1 :
            print "John"
        else :
            print "Brother"
    else :
        XorIt = 0
        for i in lists :
            XorIt ^= i
        if not XorIt :
            print "Brother"
        else :
            print "John"