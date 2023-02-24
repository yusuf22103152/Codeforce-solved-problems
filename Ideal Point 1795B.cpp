#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t--) {
        int n,k;
        map<int,int> m;
        cin>>n>>k;
        bool kFound=false;
        for(int i=0;i<n;i++) {
            int l,r;
            cin>>l>>r;
            if(k>=l && k<=r) {
                for(int i=l;i<=r;i++) m[i]++;
                kFound=true;  
                
            } 
        }
        int Kfreq=m[k];
        bool b=true;
        for(auto z:m) {
            if(z.first!=k && z.second>=Kfreq) {
                b=false;
                break;
            } 
        }
        b&&kFound?cout<<"YES\n":cout<<"NO\n";
    }
    
    
}