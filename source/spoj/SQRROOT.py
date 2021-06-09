import sys
 
def sqrt(n):
    x = n
    y = (x + 1) // 2
    while y < x:
        x = y
        y = (x + n // x) // 2
    return x
 
test=(input())
for i in range(int(test)) :
	num=(input())
	print(int(round(sqrt(int(num)),4))) 
 