#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,x,sets;
    cin>>t;
    while(t--) {
        cin>>n,sets=0;
        map<int,int> m;
        while(n--) cin>>x,m[x]++;
        for(auto z:m) {
            x=z.first;
            while(m[x]!=0) {
                n=x,sets++;
                while(m[n]!=0) m[n]--,n++;
            }
        }
        cout<<sets<<endl;
    }
}