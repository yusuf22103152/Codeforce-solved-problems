#https://codeforces.com/contest/1671/problem/B
t=int(input())
for x in range(t):
    n=int(input())
    con_segment=True
    a=input().split()
    for i in range(n):
        a[i]=int(a[i])
    a[n-1]-=1
    i=n-2
    while i>=0:
        z=a[i+1]-a[i]
        if z==0:
            a[i]-=1
        elif z==1:
            i-=1
            continue
        elif z==2:
            a[i]+=1
        else:
            con_segment=False
            break
        i-=1
    if con_segment:
        print("YES")
    else:
        print("NO");
