#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        int a[n];
        int F=1,L=n*n;
        for(int i=1;i<=n;i++) {
            if(i%2) {
                for(int x=0;x<n;x+=2) a[x]=L,L--;
                for(int x=1;x<n;x+=2) a[x]=F,F++;
            }
            else {
                for(int x=n-1;x>=0;x-=2) a[x]=F,F++;
                for(int x=n-2;x>=0;x-=2) a[x]=L,L--;
                if(n%2==0) for(int x=0;x<n-1;x+=2) swap(a[x],a[x+1]);
            }
            for(int x=0;x<n;x++) cout<<a[x]<<" ";
            cout<<endl;
        }
    }
}

