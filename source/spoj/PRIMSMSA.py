import sys,math
pi_cal=0.66666666666666662965923251249478198587894439697265625
test=int(sys.stdin.readline())
for i in range(test) :
	a=int(sys.stdin.readline())
	print("%0.10f"%((math.sqrt(27))/2*((4*a)**pi_cal)))