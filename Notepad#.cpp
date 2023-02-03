#https://codeforces.com/contest/1766/problem/B
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int n,c=0;
        string s;
        cin>>n>>s;
        bool dejavu=false;
        map<string,bool> m;
        for(int i=1;i<n;i++) {
            string sT="";
            sT+=s[i-1];
            sT+=s[i];
            s[i]==s[i-1]?c++:c=0;
            if(m[sT] && c!=2) {
                dejavu=true;
                break;
            }
            m[sT]=true;
        }
        dejavu?cout<<"YES\n":cout<<"NO\n";
    }
}