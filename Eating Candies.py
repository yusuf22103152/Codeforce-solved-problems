#https://codeforces.com/contest/1669/problem/F
t=int(input())
for i in range(t):
    n=int(input())
    a=input().split()
    Ai=0
    Bi=n-1
    Aw=int(a[0])
    Bw=int(a[n-1])
    candies=0
    while Bi>Ai:
        if Aw==Bw:
            candies=Ai+1+n-Bi
            Ai+=1
            Aw+=int(a[Ai])
        elif Aw>Bw:
            Bi-=1
            Bw+=int(a[Bi])  
        else:
            Ai+=1
            Aw+=int(a[Ai])   
    print(candies)
    
        
