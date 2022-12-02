//https://codeforces.com/contest/1750/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,n,x,y;
    bool yes;
    cin>>t;
    while(t--) {
        cin>>n,y=n-1,yes=false;
        while(n--) cin>>x,n==y&&x==1?yes=true:x=0;
        yes?cout<<"Yes"<<endl:cout<<"No"<<endl;
    }
}