//https://codeforces.com/contest/1713/problem/C
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        vector<int> v;
        for(int i=n-1;i>=0;) {
            int x=pow(ceil(sqrt(i)),2)-i,iTem=i;
            for(;x<=iTem && i>=0;i--,x++) v.push_back(x);
        }
        for(int i=n-1;i>=0;i--) cout<<v[i]<<" ";
        cout<<endl;
    }
}