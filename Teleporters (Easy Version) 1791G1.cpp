#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        long long int n,c,i,sum=0;
        cin>>n>>c;
        long long int a[n];
        for(i=0;i<n;i++) cin>>a[i],a[i]+=i+1;
        sort(a,a+n);
        for(i=0;i<n;i++) {
            sum+=a[i];
            if(sum==c) break;
            if(sum>c) {
                i--;
                break;
            }
        }
        if(i==n) i--;
        cout<<i+1<<endl;
    }
}