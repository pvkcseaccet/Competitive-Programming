import string
 
s=raw_input()
while s!="00e0" :
    st_stripped = s[:2]
    st_stripped = int(st_stripped)
    nos = int(s[3])
    st = st_stripped
    while nos :
        st = st * 10
        nos -= 1
    p = 1
    while p <= st :
        p<<=1
    print 2*(st-(p>>1))+1
    s=raw_input()
 