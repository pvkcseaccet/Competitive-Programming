import sys
 
test=int(raw_input())
for t in range(test) :
    N,P=map(int,sys.stdin.readline().split())
    solved=[0]*P
    pl=pc=pr=1
    for i in range(N) :
        problems=map(int,sys.stdin.readline().split())
        for j in range(len(problems)) :
            if problems[j]==1 :
                solved[j]=solved[j]+1
        if sum(problems) == 0 :
            pl=0
        if sum(problems)==P :
            pr=0
 
    for i in solved :
        if i == 0 :
            pc=0
            break
    strs=int(""+str(pc)+str(pl)+str(pr),2)
    print "Case {0}: {1}".format(t+1,strs)