//https://codeforces.com/contest/499/problem/B
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    map<string,string> m;
    int x,y;
    string s1,s2,s3;
    cin>>x>>y;
    while(y--) cin>>s1>>s2,m[s1]=s2;
    while(x--) {
        cin>>s3;
        for(auto i:m) {
            if(i.first==s3 || i.second==s3) {
                s1=i.first;
                s2=i.second;
                s3=s1.length()>s2.length()?s2:s1;
                cout<<s3<<" ";
                break;
            }
        }
    }
    cout<<endl;
}