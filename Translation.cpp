//https://codeforces.com/contest/41/problem/A
#include <iostream>
using namespace std;

int main() {
    
    string s,t,r="";
    cin>>s>>t;
    
    for(int i=s.length()-1;i>=0;i--) {
        r+=s[i];
    }
    if(r==t) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    
    
    
    
}