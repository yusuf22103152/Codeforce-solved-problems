#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) cin>>b[j];
        sort(b,b+m),a[i]=b[0];
    }
    sort(a,a+n),cout<<a[n-1]<<endl;
}
