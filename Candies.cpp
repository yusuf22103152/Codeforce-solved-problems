//https://codeforces.com/contest/1343/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,s,i;
    cin>>t;
    while(t--) {
        cin>>n;
        s=3,i=2;
        while(n%s!=0) s+=pow(2,i),i++;
        cout<<n/s<<endl;
    }
}