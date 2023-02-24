#include <bits/stdc++.h>
#define Fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define answer(x) x?cout<<"YES"<<endl:cout<<"NO"<<endl;
using namespace std;
int main() {
    Fast
    int n,t;
    long long int sum;
    string s;
    cin>>t;
    while(t--) {
        sum=0;
        cin>>n>>s;
        pair<int,int> p[n];
        for(int i=0;i<n;i++) s[i]=='L'?p[i].first=i:p[i].first=n-i-1,sum+=p[i].first;
        for(int l=0,r=n-1;r-l>=0;l++,r--) p[l].second=r,p[r].second=r;
        sort(p,p+n);
        for(int i=0;i<n;i++) sum-=p[i].first,sum+=p[i].second,cout<<sum<<" ";
        cout<<endl;
    }
}