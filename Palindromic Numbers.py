#https://codeforces.com/contest/1700/problem/B
def getInverse(c,k):
    x=ord(c)-48
    return k-x
t=int(input())
for i in range(t):
    n=int(input())
    s=input()
    k=9
    if s[0]=='9':
        k=10
    pile=[0]*n
    rem=0
    i=n-1
    while i>=0:
        x=getInverse(s[i],k)
        pile[i]=rem+x
        if rem:
            rem=0
        if pile[i]>=10:
            pile[i]-=10
            rem=1
        i-=1
    if s[0]=='9':
        pile[n-1]+=1
    if pile[n-1]==10:
        pile[n-1]=0
        i=n-2
        while i>=0:
            pile[i]+=1
            if pile[i]==10:
                pile[i]=0
            else:
                break
            i-=1
    for z in pile:
        print(z,end='')
    print('\n')    
