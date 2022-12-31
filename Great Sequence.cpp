//https://codeforces.com/contest/1641/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    long long int t,n,x,y,c;
    cin>>t;
    while(t--) {
        cin>>n>>x,c=0;
        vector<long long int> v;
        map<long long int,int> m;
        while(n--) cin>>y,v.push_back(y),m[y]++;
        sort(v.begin(),v.end());
        for(auto z:v) {
            if(!m[z]) continue;
            long long int a=z*x;
            m[a]?m[a]--:c++;
            m[z]--;
        }
        cout<<c<<endl;
    }
}
 