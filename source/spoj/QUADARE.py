import sys,math
test=int(input())
for i in range(test):
	a,b,c,d=map(float,sys.stdin.readline().split())
	print(1/4*math.sqrt((-a+b+c+d)*(a-b+c+d)*(a+b-c+d)*(a+b+c-d))) 