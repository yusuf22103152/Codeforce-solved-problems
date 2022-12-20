//https://codeforces.com/contest/237/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n,h,m,mx=1,c=1;
    string hs,ms,t;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++) {
        cin>>h>>m;
        stringstream ssh,ssm;
        ssh<<h,ssm<<m,ssh>>hs,ssm>>ms;
        t=hs+":"+ms;
        s[i]=t;
    }
    for(int i=0;i<n-1;i++) {
        s[i]==s[i+1]?c++:c=1;
        if(c>mx) mx=c;
    }
    cout<<mx<<endl;
}