//https://codeforces.com/contest/1327/problem/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    long long int t,n,k;
    cin>>t;
    while(t--) cin>>n>>k,k*=k,n%2==k%2&&k<=n?cout<<"YES"<<endl:cout<<"NO"<<endl;
}