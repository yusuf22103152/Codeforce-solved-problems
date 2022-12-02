//https://codeforces.com/contest/460/problem/A
#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int res;
    for(int i=1;i<=n;i++) {
        if(i>=m && i%m==0) {
            n++;
        }
        if(i==n) res=i;
    }
    cout<<res;
        
}