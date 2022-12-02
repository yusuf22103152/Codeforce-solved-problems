//https://codeforces.com/contest/80/problem/A
#include <iostream>
using namespace std;

int main() {
    
    int n,m,firstPrime=-1;
    cin>>n>>m;
    int i=n+1;
    while(i<=m) {
        bool isPrime=true;
        for(int j=2;j<i;j++) {
            if(i%j==0) {
                isPrime=false;
                break;
            }
        }
        if(isPrime) {
            firstPrime=i;
            break;
        }
        i++;
    }
    if(firstPrime==m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}