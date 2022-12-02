//https://codeforces.com/contest/337/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,min,dif;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++) cin>>a[i];
    sort(a,a+m);
    min=a[n-1]-a[0];
    int x=m-n;
    for(int i=0;n<=m;n++,i++) {
        dif=a[n-1]-a[i];
        if(dif<min) min=dif;
    }
    cout<<min<<endl;
}