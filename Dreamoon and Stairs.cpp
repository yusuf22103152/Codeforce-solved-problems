//https://codeforces.com/contest/476/problem/A
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,m;
    cin>>n>>m;
    int x=0,steps=0;
    if(m>n) steps=-1;
    else while(x<n || x%m!=0 || steps%m!=0) x+=2,steps++;
    cout<<steps<<endl;
}
