//https://codeforces.com/contest/1354/problem/B
#include <bits/stdc++.h>
using namespace std;

int substrlen(string s) {
    map<int,int> x;
    int a=0;
    for(int l=0,r=0;r<s.size();r++) {
        x[s[r]]++;
        while(x['1'] && x['2'] && x['3']) {
            if(!a) a=r-l+1;
            if(r-l+1<a) a=r-l+1;
            l++;
            x[s[l-1]]--;
        }
    }
    return a;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    string s;
    cin>>t;
    while(t--) cin>>s,cout<<substrlen(s)<<endl;
}