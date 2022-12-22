//https://codeforces.com/contest/1725/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n,d,i,c=0;
    long long int x;
    cin>>n>>d;
    int p[n],j=n-1;
    for(i=0;i<n;i++) cin>>p[i];
    sort(p,p+n,greater<int>());
    for(i=0;j-i>=0;i++) {
        x=p[i];
        while(x<=d && j-i>0) x+=p[i],j--;
        if(x>d) c++;
    }
    cout<<c<<endl;
}