#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,x;
    cin>>t;
    while(t--) {
       cin>>n;
       bool s=true;
       stack<int> e,o;
       e.push(0);
       o.push(0);
       while(n--) {
         cin>>x;
         if(x%2) {
           if(x<o.top()) s=false;
           else if(s) o.push(x);
         }
         else {
           if(x<e.top()) s=false;
           else if(s) e.push(x);
         }
       }
       s?cout<<"YES\n":cout<<"NO\n";
    }
}