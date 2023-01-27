//https://codeforces.com/contest/1770/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,m;
    long long int s;
    cin>>t;
    while(t--) {
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        while(m--) sort(a,a+n),cin>>a[0];
        s=0;
        for(int i=0;i<n;i++) s+=a[i];
        cout<<s<<endl;
    }
}