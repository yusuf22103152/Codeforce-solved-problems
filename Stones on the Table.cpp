//https://codeforces.com/contest/266/problem/A
#include <iostream>
using namespace std;

int main() {
    
    int n;
    string s;
    cin>>n>>s;
    
    int remo=0;
    
    for(int i=0;i<n-1;i++) {
        char last=s[i];
        if(s[i+1]==last) {
            remo++;
        } 
    }
    cout<<remo;
    
    
}