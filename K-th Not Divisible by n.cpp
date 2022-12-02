//https://codeforces.com/contest/1352/problem/C
#include <bits/stdc++.h>
using namespace std;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        int out=k+(k/(n-1));
        if(n==k) out=n+1;
        else if(n>k) out=k;
        else if(k%(n-1)==0) out--;
        cout<<out<<endl;
    }
    cout<<endl;
}