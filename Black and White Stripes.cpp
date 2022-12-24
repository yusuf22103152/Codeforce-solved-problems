//https://codeforces.com/contest/1690/problem/D
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,k,w,m,i;
    string s;
    cin>>t;
    while(t--) {
        cin>>n>>k>>s;
        for(w=0,i=0;i<k;i++) if(s[i]=='W') w++;
        for(m=w;i<n;i++) {
            if(s[i]=='W') w++;
            if(s[i-k]=='W') w--;
            if(w<m) m=w;
        }
        cout<<m<<endl;
    }
}