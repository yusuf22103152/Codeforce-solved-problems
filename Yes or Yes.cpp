//https://codeforces.com/contest/1703/problem/A
#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++) {
        string s,out="";
        cin>>s;
        for(int i=0;i<3;i++) {
            char c=tolower(s[i]);
            out+=c;
        }
        if(out=="yes") cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    
    
    
    
}