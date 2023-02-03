//https://codeforces.com/contest/1671/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,i;
    cin>>t;
    while(t--) {
        cin>>n;
        int a[n];
        bool con_segment=true;
        for(i=0;i<n;i++) cin>>a[i];
        for(a[n-1]--,i=n-2;i>=0;i--) {
            switch(a[i+1]-a[i]) {
                case 0:
                    a[i]--;
                    break;
                case 1:
                    continue;
                case 2:
                    a[i]++;
                    break;
                default:
                   con_segment=false;
            }
            if(!con_segment) break;
        }
        con_segment?cout<<"YES\n":cout<<"NO\n";
    }
}