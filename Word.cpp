//https://codeforces.com/contest/59/problem/A
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    
    string s;
    cin>>s;
    int len=s.length();
    int ups=0;
    for(int i=0;i<len;i++) {
        if(islower(s[i])==0) {
            ups++;
        }
    }
    bool convToUpper=false;
    if(ups>len/2) {
        convToUpper=true;
    }
    string res="";
    for(int i=0;i<len;i++) {
        char c;
        if(convToUpper) {
          c=toupper(s[i]);
        }
        else {
          c=tolower(s[i]);
        }
        res+=c;
    }
    cout<<res;
    
    
    
}