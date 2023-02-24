#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        char c;
        cin>>c;
        bool yes=false;
        string s="codefrs";
        for(auto x:s) {
           if(x==c) {
              yes=true;
              break;
           }
        }
        yes?cout<<"YES\n":cout<<"NO\n";
    }
}