//https://codeforces.com/contest/1703/problem/E
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,i,j,x,z;
    string s;
    cin>>t;
    while(t--) {
        cin>>n;
        int a[n][n];
        for(i=0;i<n;i++) {
            cin>>s;
            for(j=0;j<n;j++) a[i][j]=s[j]-'0';
        }
        z=0;
        for(i=0;i<n/2;i++) {
            for(j=i;j<n-i-1;j++) {
                x=a[i][j]+a[j][n-1-i]+a[n-1-i][n-1-j]+a[n-1-j][i];
                z+=min(4-x,x);
            }
        }
        cout<<z<<endl;
    }
}