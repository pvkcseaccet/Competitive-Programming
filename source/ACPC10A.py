import sys
a,b,c=map(int,sys.stdin.readline().split())
while a!=0 or b!=0 or c!=0 :
	if b-a==c-b :
		print("AP %d\n"%(c+(b-a)))
	else :
		print("GP %d\n"%(c*(b/a)))
	a,b,c=map(int,sys.stdin.readline().split())