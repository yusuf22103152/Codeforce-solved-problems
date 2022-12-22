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
        cin>>s>>p,b=s,p,x=0;
        int map[26]={0};
        for(auto c:s) x+=c-96;
        sort(s.begin(),s.end(),greater<int>());
        for(auto c:s) if(x>p) map[c-96]++,x-=c-96; else break;
        for(auto c:b) {
            if(map[c-96]) {
                map[c-96]--;
                continue;
            }
            cout<<c;
        }
        cout<<endl;
    }
}