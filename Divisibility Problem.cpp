//https://codeforces.com/contest/1328/problem/A
#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--) {
        
        int a,b;
        cin>>a>>b;
        if(a%b==0) cout<<0;
        else if(a<b) cout<<b-a;
        else {
            int tem=b*(a/b)+b;
            cout<<tem-a;
        }
        cout<<endl;
        
    }
    
}