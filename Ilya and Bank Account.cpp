//https://codeforces.com/contest/313/problem/A
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    if(n>0) {
        cout<<n;
    }
    else { 
       int l=n%10;
       int sl=(n/10)%10;
       if(l<sl) cout<<n/10;
       else {
           cout<<n/100*10+l;
       }
    }
    
}