import sys,math
test=int(sys.stdin.readline())
for i in range(test) :
    a,b,c=map(int,sys.stdin.readline().split())
    result=(a*b*c)/(a*b+b*c+c*a+2*math.sqrt(a*b*c*(a+b+c)))
    sys.stdout.write(str("%0.6f"%(result))+"\n") 