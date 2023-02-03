//https://codeforces.com/contest/1704/problem/C
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,m;
    cin>>t;
    while(t--) {
        cin>>n>>m;
        int a[m],sum=0,minus=0;
        for(int i=0;i<m;i++) cin>>a[i];
        sort(a,a+m);
        vector<int> v;
        v.push_back(n-a[m-1]+a[0]-1);
        for(int i=1;i<m;i++) v.push_back(a[i]-a[i-1]-1);
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<m;i++) {
            v[i]-=minus;
            if(v[i]<1) break;
            sum+=v[i]-1+(v[i]==1);
            minus+=4;
        }
        cout<<n-sum<<endl;
    }
}