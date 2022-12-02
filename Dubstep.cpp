//https://codeforces.com/contest/208/problem/A
#include <iostream>
using namespace std;

int main() {
    
    string s;
    cin>>s;
    string org="";
    bool f=false;
    int len=s.length();
    string fs="",ls="";
    /*
    if(s.substr(0,3)!="WUB") {
        while(s.substr(c,3)!="WUB") {
            fs+=s[c];
            c++;
        }
    }
    */
    for(int i=0;i<len;i++) {
        string t=s.substr(i,3);
        if(t=="WUB") {
            i+=2;
            if(f){
            org+=' ';
            }
        }
        else {
            f=true;
            org+=s[i];
        }
    }
    cout<<org;
}