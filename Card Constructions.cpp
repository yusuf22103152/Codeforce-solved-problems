//https://codeforces.com/contest/1345/problem/B
#include <bits/stdc++.h>
using namespace std;

long long int getH(long long int n) {
    long long int i=0,h=0;
    while(i<n) {
        i=h*2+(h-1)*h/2*3;
        if(i>n) return h-1;
        if(i==n) return h;
        h++;
    }
    return h;
}
long long int getPyramids(long long int n) {
    long long int h=getH(n),p=0;
    while(h) {
        n-=h*2+(h-1)*h/2*3;
        if(n<0) break;
        p++,h=getH(n);
    }
    return p;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    long long int n;
    cin>>t;
    while(t--) cin>>n,cout<<getPyramids(n)<<endl;
}