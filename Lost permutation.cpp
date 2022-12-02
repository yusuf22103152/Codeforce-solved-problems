//https://codeforces.com/contest/1759/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--) {
        
        int m,s;
        cin>>m>>s;
        map<int,int> mp;
        int x;
        bool yes=false;
        for(int i=0;i<m;i++) {
            cin>>x;
            mp[x]++;
        }
        int y=1,sum=0;
        while(sum<s) {
            mp[y];
            if(mp[y]==0) {
                sum+=y;
                mp[y]++;
            }
            y++;
        }
        int b=1;
        bool c=true;
        if(sum!=s) c=false;
        else {
          for(auto z:mp) {
              if(z.first!=b) {
                  c=false;
                  break;
              }
              b++;
          }
        }
        if(c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    
    
}