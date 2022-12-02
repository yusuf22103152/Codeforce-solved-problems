//https://codeforces.com/contest/1397/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        map<char,int> letters;
        int q;
        cin>>q;
        string merged="";
        int len;
        for(int k=0;k<q;k++) {
           string s;
           cin>>s;
           merged+=s;
           len=merged.length();
        }
        for(int j=0;j<len;j++) {
            char c=merged[j];
            letters[c]++;
        }
        bool yes=true;
        for(int m=0;m<len;m++) {
            char c=merged[m];
            int rep=letters[c];
            if(rep%q!=0) {
                yes=false;
                break;
            } 
        }
        if(yes) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}