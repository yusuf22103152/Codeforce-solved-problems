//https://codeforces.com/contest/43/problem/A
#include <iostream>
using namespace std;

int main() {
    
    int n,t1goals=1,t2goals=0;
    cin>>n;
    string s,t1,t2;
    cin>>t1;
    bool t2Discovered=false;
    if(n==1) {
        cout<<t1;
    }
    else {
      for(int i=1;i<n;i++) {
        cin>>s;
        if(s==t1) t1goals++;
        else {
            t2goals++;
            if(!t2Discovered) {
                t2=s;
                t2Discovered=true;
            }
        }
      }
      if(t1goals>t2goals) cout<<t1;
      else cout<<t2;
        
    }
}