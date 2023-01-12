//https://codeforces.com/contest/1676/problem/D
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int t,n,m,x,max;
    cin>>t;
    while(t--) {
        map<int,int> m45,m135;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                cin>>a[i][j];
                m45[i+j]+=a[i][j];
                m135[i-j]+=a[i][j];
            }
        }
        max=0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                x=m45[i+j]+m135[i-j]-a[i][j];
                if(x>max) max=x;
            }
        }
        cout<<max<<endl;
    }
}

