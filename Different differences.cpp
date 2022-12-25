//https://codeforces.com/problemset/problem/1772/C
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,k,x,y;
    cin>>t;
    while(t--) {
        cin>>k>>n;
        for(x=1,y=1;k>0;k--) {
            n--;
            cout<<x<<" ";
            (k-1)*k/2>n?x++:(x+=y,y++);
        }
        cout<<endl;
    }
}