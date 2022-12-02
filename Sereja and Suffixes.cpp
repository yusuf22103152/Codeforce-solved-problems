//https://codeforces.com/contest/368/problem/B
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int x,y;
    map<int,int> p,q;
    cin>>x>>y;
    int a[x];
    for(int i=0;i<x;i++) cin>>a[i];
    while(x--) q[a[x]],p[x]=q.size();
    while(y--) cin>>x,cout<<p[x-1]<<endl;
}