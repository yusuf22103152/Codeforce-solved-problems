//https://codeforces.com/contest/339/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,x,pos=1;
    long long int t_units=0;
    cin>>n>>m;
    while(m--) cin>>x,x>=pos?t_units+=x-pos:t_units+=n-pos+x,pos=x;
    cout<<t_units<<endl;
}