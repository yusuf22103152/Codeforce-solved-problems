//https://codeforces.com/contest/903/problem/C
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n,x,max=0;
    cin>>n;
    map<int,int> m;
    while(n--) cin>>x,m[x]++;
    for(auto a:m) if(a.second>max) max=a.second;
    cout<<max<<endl;
}