#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        for(int i=s.size()-2;i>=0;i--) {
            char c=s[i],d=s[i+1];
            c+=c!='9';
            string pre="",post="";
            pre+=s[i],pre+=d;
            post+=d,post+=c;
            if(post<pre) s[i]=d,s[i+1]=c;
        }
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }
}