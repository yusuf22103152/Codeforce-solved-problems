//https://codeforces.com/contest/546/problem/A
#include <iostream>
using namespace std;

int main() {
    
    int k,n,w;
    cin>>k>>n>>w;
    
    int inneed=n;
    for(int i=1;i<=w;i++) {
        inneed-=(k*i);
    }
    if(inneed<0) cout<<inneed*-1;
    else cout<<0;
    
    
}