//https://codeforces.com/contest/520/problem/B
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m,c,x;
    cin>>n>>m,c=m%2,x=m+c;
    while(x>n) c+=x%2,x+=x%2,x/=2,c++;
    cout<<c+n-x<<endl;
}