//https://codeforces.com/contest/230/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int s,n;
    bool yes=true;
    cin>>s>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++) cin>>x[i]>>y[i];
    for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) if(x[i]>x[j]) swap(x[i],x[j]),swap(y[i],y[j]);
    for(int i=0;i<n;i++) {
        if(s>x[i]) s+=y[i];
        else {
            yes=false;
            break;
        }
    }
    yes?cout<<"YES\n":cout<<"NO\n";
}