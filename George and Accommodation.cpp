//https://codeforces.com/contest/467/problem/A
#include <iostream>
using namespace std;


int main() {
    int n,p,q,c=0;
    cin>>n;
    while(n--) {
        
        cin>>p>>q;
        if(q-p>=2) c++;
    }
    
    cout<<c;
    
    
    
    
}