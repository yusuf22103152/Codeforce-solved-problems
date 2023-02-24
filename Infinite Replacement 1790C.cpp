#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,x;
    cin>>t;
    while(t--) {
        cin>>n;
        map<int,int> m,m2;
        for(int i=0;i<n;i++) for(int j=0;j<n-1;j++) cin>>x,m[x]+=j;
        for(auto x:m) m2[x.second]=x.first;
        for(auto x:m2) cout<<x.second<<" ";
        cout<<endl;
    }
}