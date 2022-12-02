//https://codeforces.com/contest/1729/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    while(n--) {
        int a,b,c;
        cin>>a>>b>>c;
        
        int fLift=a;
        int sLift;
        if(c>b) {
            sLift=2*c-b;
        }
        else {
            sLift=b;
        }
        if(a>sLift) cout<<2;
        else if(a<sLift) cout<<1;
        else cout<<3;
        cout<<endl;
        
    }
    
    
}