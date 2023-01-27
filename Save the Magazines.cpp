//https://codeforces.com/contest/1743/problem/C
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,sum,min;
    string s;
    cin>>t;
    while(t--) {
        cin>>n>>s;
        sum=0;
        int ar[n];
        for(int a=0;a<n;a++) cin>>ar[a]; 
        for(int b=n-1;b>=0;b--) {
            if(s[b]=='1') {
                min=ar[b];
                sum+=ar[b];
                for(b--;b>=0;b--) {
                    sum+=ar[b];
                    if(ar[b]<min) min=ar[b];
                    if(s[b]=='0') break;
                }
                if(b>=0 && s[b]=='0') sum-=min;
            }
        }
        cout<<sum<<endl;
    }
}