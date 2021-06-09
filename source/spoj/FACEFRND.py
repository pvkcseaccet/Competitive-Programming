import sys
 
has , f = [0]*(100010) , []
for __ in range(input()) :
    lists = map(int,sys.stdin.readline().split())
    m , n , _ = lists[0] , lists[1] , lists[2:]
    f.append(m)
    for i in _ :
        has[i] = 1
    has[m] = 0
for __ in f:
    has[__] = 0
ans = 0
for i in has :
    if i :
        ans += 1
print ans