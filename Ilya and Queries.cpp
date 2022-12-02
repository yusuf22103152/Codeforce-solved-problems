//https://codeforces.com/contest/313/problem/B
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    int i=1,a=0,b=s.length(),x[b];
    x[0]=0;
    for(;i<b;i++) {
        if(s[i]==s[i-1]) a++;
        x[i]=a;
    }
    cin>>i;
    while(i--) cin>>a>>b,cout<<x[b-1]-x[a-1]<<endl;
}

