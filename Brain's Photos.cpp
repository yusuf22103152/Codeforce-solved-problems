//https://codeforces.com/contest/707/problem/A
#include <iostream>
using namespace std;
int main() {
    
    int n,m;
    cin>>n>>m;
    
    int range=n*m;
    bool colored=false;
    while(range--) {
        
        char c;
        cin>>c;
        if(c=='C' || c=='M' || c=='Y') {
            colored=true;
            break;
        }
    }
    if(colored) cout<<"#Color";
    else cout<<"#Black&White";
    
}