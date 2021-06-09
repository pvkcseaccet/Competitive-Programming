import sys
cd,nephew=map(int,sys.stdin.readline().split())
while 1 :
	ans=1
	if cd==0 and nephew==0 :
		break
	else :
		for i in range(nephew) :
			ans*=cd
	print(ans)
	cd,nephew=map(int,sys.stdin.readline().split())