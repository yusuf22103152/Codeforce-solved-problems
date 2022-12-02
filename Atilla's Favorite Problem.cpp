//https://codeforces.com/contest/1760/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int max=1;
        
        while(n--) {
            char c;
            cin>>c;
            int x=c;
            if(x>max) max=x;
        }
        cout<<max-96<<endl;
        
        
    }
    
    
}