//https://codeforces.com/contest/577/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,x,i,y=0;
    cin>>n>>x;
    for(i=n;i>0;i--) if(!(x%i) && x/i<=n) y++;
    cout<<y<<endl;
}