//https://codeforces.com/contest/433/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,x,oneH=0,twoH=0;
    cin>>n;
    while(n--) cin>>x,x==100?oneH++:twoH++;
    if(!oneH && twoH%2) cout<<"NO\n"; 
    else if(oneH%2==0) cout<<"YES\n"; 
    else cout<<"NO\n"; 
}