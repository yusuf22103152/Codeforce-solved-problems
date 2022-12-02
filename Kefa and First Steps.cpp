//https://codeforces.com/contest/580/problem/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,x,m=1,c=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++) {
        if(a[i+1]>=a[i]) {
                c++;
                if(c>m) m=c;
        }
        else c=1;
    }
    cout<<m<<endl;
}
