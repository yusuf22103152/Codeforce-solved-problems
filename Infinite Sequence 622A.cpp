#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    long long int n,x,y;
    cin>>n;
    x=sqrt(n*2)-1;
    y=x*(x+1)/2;
    while(y<n) x++,y=x*(x+1)/2;
    y=(x-1)*x/2;
    x=n-y;
    cout<<x<<endl;
}