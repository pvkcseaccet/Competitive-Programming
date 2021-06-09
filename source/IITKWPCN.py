# Author    : pvkcse
# Student At: accet,kkdi
 
import sys
 
class ball :
	
	def __init__(self,w,b) :
		self.w=w
		self.b=b
		
	def solve(self) :
		if self.b&1 :
			print("1.000000")
		else :
			print("0.000000")
 
		
def main() :
	
		test=int(input())
		for __ in range(test) :
			w,b=map(int,sys.stdin.readline().split())
			prob_black=ball(w,b)
			prob_black.solve()
			
if __name__=="__main__" :
	main()
 