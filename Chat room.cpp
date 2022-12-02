//https://codeforces.com/contest/58/problem/A
#include <iostream>
using namespace std;

int main() {
    
    string s;
    cin>>s;
    
    char checks[]={'h','e','l','l','o'};
    string tem="";
    for(int r=0;r<s.length();r++) {
        char c=s[r];
        if(c=='h'||c=='e'||c=='l'||c=='o') {
            tem+=c;
        }
    }
    bool itsHello=false;
    int len=tem.length();
    string res="";
    
    int c=0;
    for(int r=0;r<len;r++) {
        if(tem[r]==checks[c]){
            res+=checks[c];
            c++;
        } 
    }
    if(res=="hello") {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}