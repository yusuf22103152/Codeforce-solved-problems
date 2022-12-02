//https://codeforces.com/contest/450/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n,m;
    cin>>n>>m;
    
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int nonZeroes=n,index=0;
    while(nonZeroes>1) {
        nonZeroes=0;
        for(int i=0;i<n;i++) {
            a[i]-=m;
            if(a[i]>0) {
                nonZeroes++;
                index=i+1;
            }
        }
    }
    if(index==0) cout<<n;
    else cout<<index;
    
    
    
    
}