#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        int a[n+1],p=0,xp;
        set<int> unq;
        a[0]=0;
        for(int i=1;i<=n;i++) {
            cin>>a[i];
            if(a[i-1]>a[i]) p=i;
        }
        for(int i=1;i<p;i++) unq.insert(a[i]);
        xp=p;
        for(int i=xp;i<=n;i++) if(unq.find(a[i])!=unq.end()) p=i;
        for(int i=xp;i<p;i++) unq.insert(a[i]);
        p?cout<<unq.size()<<endl:cout<<p<<endl;
    }
}