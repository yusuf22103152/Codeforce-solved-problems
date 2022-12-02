//https://codeforces.com/contest/1374/problem/B
#include <bits/stdc++.h>
using namespace std;
int steps(int n) {
    int x=0;
    if(n==1) return x;
    else {
        while(n>0) {
            n%6?(n*=2,x++):(n/=6,x++);
            if(n==1) return x;
        }
        return -1;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,t;
    cin>>t;
    while(t--) cin>>n,cout<<steps(n)<<endl;
}