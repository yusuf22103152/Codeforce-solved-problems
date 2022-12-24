//https://codeforces.com/contest/1671/problem/C
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    long long int t,n,x,e,i,s,c;
    cin>>t;
    while(t--) {
        cin>>n>>x;
        vector<int> v;
        while(n--) cin>>e,v.push_back(e);
        sort(v.begin(),v.end());
        i=1,s=0,c=0;
        for(auto k:v) {
            s+=k;
            if(s>x) break;
            c+=(x-s)/i+1,i++;
        }
        cout<<c<<endl;
    }
}