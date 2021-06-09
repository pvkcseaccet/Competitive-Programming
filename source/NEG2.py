import sys
 
def neg_binary(i):
    bin_digits = ''
    if not i:
        bin_digits = '0'
    else:
        while i != 0:
            i, remainder = divmod(i, -2)
            if remainder < 0:
                i=i+1
                remainder+=2
            bin_digits = str(remainder)+ bin_digits
    return bin_digits
 
print (neg_binary(int(sys.stdin.readline())))
 