//https://codeforces.com/contest/237/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n,h,m,mx=1;
    string hs,ms,t;
    map<string,int> x;
    cin>>n;
    while(n--) {
        cin>>h>>m;
        stringstream ssh,ssm;
        ssh<<h,ssm<<m,ssh>>hs,ssm>>ms;
        t=hs+":"+ms;
        x[t]++;
        if(x[t]>mx) mx=x[t];
    }
    cout<<mx<<endl;
}