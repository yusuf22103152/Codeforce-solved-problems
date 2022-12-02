//https://codeforces.com/contest/492/problem/B
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,l,i;
    double x;
    cin>>n>>l;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n-1;i++) if(a[i+1]-a[i]>x) x=a[i+1]-a[i];
    printf("%lf\n",max(x/2,max((double) a[0],(double)l-a[n-1])));
}