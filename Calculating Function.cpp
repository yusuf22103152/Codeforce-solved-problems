//https://codeforces.com/contest/486/problem/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    long long n,x;
    cin>>n;
    x=n/2*2;
    cout<<2*(x*(x+2))/4-n*(n+1)/2<<endl;
}
