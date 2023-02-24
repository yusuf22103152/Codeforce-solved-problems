#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,m;
    cin>>t;
    while(t--) {
        cin>>n>>m;
        string s,t;
        cin>>s>>t;
        string u="",v="";
        
        u=s;
        for(int i=m-1;i>=0;i--) u+=t[i]; 
        v=t;
        for(int i=n-1;i>=0;i--) v+=s[i]; 
        //cout<<u<<endl<<v<<endl<<endl;
        
        int x=m+n;
        //bool b=true;
        int y=0,z=0;
        for(int i=0;i<x-1;i++) {
            if(u[i]==u[i+1]) y++;
            if(v[i]==v[i+1]) z++;
        }
        if(min(y,z)<2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    
}