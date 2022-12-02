//https://codeforces.com/contest/519/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,i;
    cin>>n;
    int a[n],b[n-1],c[n-2];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n-1;i++) cin>>b[i];
    for(i=0;i<n-2;i++) cin>>c[i];
    sort(a,a+n);
    sort(b,b+n-1);
    sort(c,c+n-2);
    int fixed1,fixed2;
    bool check1=false,check2=false;
    for(i=0;i<n;i++) {
        if(i<n-1 && !check1) if(a[i]!=b[i]) fixed1=a[i],check1=true; else if(i==n-2) fixed1=a[n-1],check1=true;
        if(i<n-2 && !check2) if(b[i]!=c[i]) fixed2=b[i],check2=true; else if(i==n-3) fixed2=b[n-2],check2=true;
        if(check1 && check2) break;
    }
    cout<<fixed1<<endl<<fixed2<<endl;
}