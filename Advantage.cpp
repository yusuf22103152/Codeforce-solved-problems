//https://codeforces.com/contest/1760/problem/C
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n],b[n];
        map<int,int> m;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            b[i]=a[i];
            m[a[i]];
        }
        sort(b,b+n);
        int max=b[n-1];
        int max2=b[n-2];
        for(int i=0;i<n;i++) {
            if(a[i]==max) cout<<max-max2;
            else cout<<a[i]-max;
            cout<<" ";
        }
        cout<<endl;
    }
    
    
}