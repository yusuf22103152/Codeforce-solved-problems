//https://codeforces.com/contest/1335/problem/C
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n,x;
        cin>>n;
        int mostRep=0;
        map<int,int> m;
        while(n--) cin>>x,m[x]++;
        int dists=m.size();
        for(auto i:m) if(i.second>mostRep) mostRep=i.second;
        int out=dists<mostRep?dists:mostRep;
        if(dists==mostRep) out--;
        cout<<out<<endl;
    }
    cout<<endl;
    
}