//https://codeforces.com/contest/124/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a,b;
    cin>>n>>a>>b,a+b<n?n=b+1:n-=a,cout<<n<<endl;
}