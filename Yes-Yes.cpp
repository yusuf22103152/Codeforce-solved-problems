//https://codeforces.com/contest/1759/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--) {
        
        string s;
        cin>>s;
        bool yes=false;
        int l=s.length();
        if(l==1) {
            if(s=="Y"||s=="e"||s=="s") yes=true;
        }
        else {
            bool x=true;
            for(int i=0;i<l-1;i++) {
                string a="";
                a+=s[i];
                a+=s[i+1];
                int c=0;
                if(!(a=="Ye"||a=="es"||a=="sY")) {
                    x=false;
                    break;
                }
            }
            yes=x;
        }
        if(yes) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        
    }
    
}