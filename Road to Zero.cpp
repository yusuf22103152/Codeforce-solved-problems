//https://codeforces.com/contest/1342/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    long long int t,x,y,a,b,l,h;
    cin>>t;
    while(t--) cin>>x>>y>>a>>b,h=x>y?x:y,l=x+y-h,a*2>b?x=b*l+a*(h-l):x=a*(x+y),cout<<x<<endl;
}