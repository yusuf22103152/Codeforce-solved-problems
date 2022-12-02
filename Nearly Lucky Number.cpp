//https://codeforces.com/contest/110/problem/A
#include <iostream>
using namespace std;
 
int main() {
    long long n;
    cin>>n;
    
    int lnums=0;
    
    while(n!=0) {
        if(n%10==7 || n%10==4) {
            lnums++;
        }
        n/=10;
    }
    if(lnums==4 || lnums==7) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
        
    }
}