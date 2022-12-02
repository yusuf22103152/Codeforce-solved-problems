//https://codeforces.com/contest/630/problem/C
#include <bits/stdc++.h>
using namespace std;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    int n;
    cin>>n;
    long long int x=0,y;
    for(;n>0;n--) y=pow(2,n),x+=y;
    cout<<x<<endl;
}