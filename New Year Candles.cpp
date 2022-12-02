//https://codeforces.com/contest/379/problem/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a,b,c=0,d;
    cin>>a>>b,d=a;
    while(d>=b) d-=b-1,a++;
    cout<<a<<endl;
}