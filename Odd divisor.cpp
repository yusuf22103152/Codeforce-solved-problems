//https://codeforces.com/contest/1475/problem/A
#include <bits/stdc++.h>
using namespace std;
bool isInt(long double n) {
    long long int x=n;
    if(n==x) return true;
    return false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    long long int n;
    cin>>t;
    while(t--) cin>>n,isInt(log2(n))?cout<<"NO"<<endl:cout<<"YES"<<endl;
}