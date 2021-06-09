import sys,string
 
for __ in range(input()) :
    subs = []
    s = raw_input()
    for i in range(len(s)) :
        for j in range(i,len(s)) :
            subs.append(s[i:j+1])
    k = [i for i in subs]
    #map(str,map(lambda x:x[::-1],map(list,subs)))
    for i in range(len(subs)) :
        subs[i]=subs[i][::-1]
    print "YES" if len(filter(lambda x:x in k,subs)) == len(k) else "NO" 