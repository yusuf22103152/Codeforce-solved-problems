//https://codeforces.com/contest/32/problem/B
#include <bits/stdc++.h>
using namespace std;


int main() {
    
    string s;
    cin>>s;
    
    int len=s.length();
    for(int i=0;i<len;i++) {
        
        string cmp=s.substr(i,2);
        if(cmp=="--") {
            cout<<2;
            i++;
        } 
        else if(cmp=="-.") {
            cout<<1;
            i++;
        } 
        else cout<<0;
        
        
    }
    
    
}