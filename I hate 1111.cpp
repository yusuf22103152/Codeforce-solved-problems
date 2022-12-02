//https://codeforces.com/contest/1526/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,x;
    cin>>t;
    while(t--) cin>>x,!(x%11)||x/111>=x%11?cout<<"YES\n":cout<<"NO\n";
}