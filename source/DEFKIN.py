import sys
 
for __ in range(input()) :
    w , h , n = map(int,sys.stdin.readline().split())
    x , y = [0]*(n+2) , [0]*(n+2)
    for i in range(n) :
        a , b = map(int,sys.stdin.readline().split())
        x[i+1] = a
        y[i+1] = b
    n+= 1
    x[n] , y[n] = w,h
    x.sort()
    y.sort()
    distx , disty = [0]*(n) , [0]*(n)
    for i in range(n) :
        distx[i] = (x[i+1]-x[i]-1)
        disty[i] = (y[i+1]-y[i]-1)
    distx[n-1]+=1
    disty[n-1]+=1
    distx.sort()
    disty.sort()
    print distx[n-1]*disty[n-1]
 