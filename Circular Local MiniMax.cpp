//https://codeforces.com/contest/1685/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int n,l,r,uniqueEs=0;
        cin>>n;
        int a[n];
        bool circleAble=true;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        vector<int> v;
        for(l=0,r=n/2;l<n/2;l++,r++) {
            v.push_back(a[l]);
            v.push_back(a[r]);
        }
        if(n%2) v.push_back(a[n-1]);
        v.push_back(a[0]);
        for(l=1;l<n;l++) {
            if(!((v[l]>v[l-1]&&v[l]>v[l+1])||(v[l]<v[l-1] && v[l]<v[l+1]))) {
                circleAble=false;
                break;
            }
        }
        if(circleAble) {
            cout<<"YES"<<endl;
            for(l=0;l<n;l++) cout<<v[l]<<" ";
        }
        else cout<<"NO";
        cout<<endl;
    }
}