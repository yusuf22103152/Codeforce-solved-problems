#https://codeforces.com/contest/74/problem/A
sum=-2501
leader='null'
n=int(input())
for i in range(n):
    line=input().split()
    handle=line[0]
    plus=int(line[1])
    minus=int(line[2])
    a=int(line[3])
    b=int(line[4])
    c=int(line[5])
    d=int(line[6])
    e=int(line[7])
    x=plus*100-minus*50+a+b+c+d+e
    if x>sum:
        sum=x
        leader=handle
print(leader)