#https://codeforces.com/contest/1778/problem/A
t=int(input())
for x in range(t):
    n=int(input())
    a=input().split()
    flipped=False
    for i in range(n-1):
        if int(a[i])==-1 and int(a[i+1])==-1:
            a[i]=1
            a[i+1]=1
            flipped=True
            break
    if not flipped:
        for i in range(n-1):
            if (int(a[i])==-1 and int(a[i+1])==1) or (int(a[i])==1 and int(a[i+1])==-1):
                flipped=True
                break
                
    if flipped:
        sum=0
        for i in range(n):
            sum+=int(a[i])
        print(sum)
    else:
        print(n-4)