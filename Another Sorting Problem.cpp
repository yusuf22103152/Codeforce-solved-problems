//https://codeforces.com/contest/1575/problem/A
#include <bits/stdc++.h>
using namespace std;

char inverseChar(char c) {
    char cRet=26-(c-64)+1+64;
    return cRet;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n,m;
    char c;
    vector<string> v;
    map<string,int> mp;
    cin>>n>>m;
    for(int i=1;i<=n;i++) {
        deque<char> d;
        for(int j=1;j<=m;j++) {
            cin>>c;
            if(j%2) d.push_back(c);
            else d.push_back(inverseChar(c));
        }
        string s{d.begin(),d.end()};
        mp[s]=i;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    for(auto x:v) cout<<mp[x]<<" ";
}