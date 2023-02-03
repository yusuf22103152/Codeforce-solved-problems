#https://codeforces.com/contest/1766/problem/B
t=int(input())
for x in range(t):
    n=int(input())
    s=input()
    c=0
    dejavu=False
    dict={}
    i=1
    while i<n:
        sT=s[i-1]+s[i]
        if s[i]==s[i-1]:
            c+=1
        else:
            c=0
        if sT in dict and c!=2:
            dejavu=True
            break
        dict[sT]=True
        i+=1
    if dejavu:
        print("YES")
    else:
        print("NO")