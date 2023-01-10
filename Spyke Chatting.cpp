//https://codeforces.com/contest/413/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n,m,k,x,y,eNotifs;
    cin>>n>>m>>k;
    int stats[n+1][m+1],eNeg[n+1]={0},chatsMult[m+1]={0};
    for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin>>stats[i][j];
    while(k--) {
        cin>>x>>y;
        if(stats[x][y]) eNeg[x]++,chatsMult[y]++;
    }
    for(int i=1;i<=n;i++) {
        eNotifs=0;
        for(int j=1;j<=m;j++) eNotifs+=stats[i][j]*chatsMult[j];
        cout<<eNotifs-eNeg[i]<<" ";
    }
    cout<<endl;
}