import sys
 
pow_list=[1]
def pow_calc() :
	for i in range(510) :
		pow_list.append((2*pow_list[i])%1298074214633706835075030044377087)
	#return pow_list[x]
		
#def main() :
test=int(sys.stdin.readline())
pow_calc()
for j in range(test) :
	number=int(sys.stdin.readline())
	print(pow_list[number+1]-1)