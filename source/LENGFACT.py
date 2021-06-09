import math
 
test=int(input())
for i in range(test) :
	p=math.acos(-1.0)
	n=int(input())
	if n<3 :
		print("1")
	else :
		print(int(math.floor((n*math.log(n)-n+(math.log(2.0*p*n))/2.0)/math.log(10.0))+1.0))
 