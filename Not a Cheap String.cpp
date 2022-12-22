//https://codeforces.com/problemset/problem/1702/D
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,p,x;
    cin>>t;
    string s,b;
    while(t--) {
        map<char,int> m;
        cin>>s>>p,b=s,p,x=0;
        for(auto c:s) x+=c-96;
        sort(s.begin(),s.end(),greater<int>());
        for(auto c:s) if(x>p) m[c]++,x-=c-96; else break;
        for(auto c:b) {
            if(m[c]) {
                m[c]--;
                continue;
            }
            cout<<c;
        }
        cout<<endl;
    }
}