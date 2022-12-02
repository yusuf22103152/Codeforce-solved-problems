//https://codeforces.com/contest/131/problem/A
#include <bits/stdc++.h>
using namespace std;

string modified(string s) {
    bool needChange;
    int l=s.length();
    int c=0;
    if(l==1) needChange=true;
    else {
        for(int i=0;i<l;i++) {
            if(!isupper(s[i])) c++;
        }
        if(c==0) needChange=true;
        else if(c==1 && !isupper(s[0])) needChange=true;
        else needChange=false;
    }
    if(needChange) {
        for(int i=0;i<l;i++) {
            char c;
            if(!isupper(s[i])) {
                c=toupper(s[i]);
            }
            else {
                c=tolower(s[i]);
            }
            s[i]=c;
        }
    }
    return s;
}

int main() {
    string s;
    cin>>s;
    cout<<modified(s);
    cout<<endl;
}