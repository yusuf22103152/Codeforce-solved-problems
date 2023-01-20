//https://codeforces.com/contest/610/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    if(n%2||n<6) cout<<0<<endl;
    else cout<<((n-2)/4)<<endl;
}