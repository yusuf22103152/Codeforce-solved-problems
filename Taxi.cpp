//https://codeforces.com/contest/158/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n,x;
    map<int,int> m;
    cin>>n;
    while(n--) cin>>x,m[x]++;
    int solo=m[1],duo=m[2],trio=m[3],quad=m[4];
    if(solo>trio) quad+=trio,solo-=trio,trio=0;
    else quad+=solo,trio-=solo,solo=0;
    quad+=duo/2,duo%=2;
    quad+=solo/4,solo%=4;
    duo+=solo/2,solo%=2;
    quad+=duo/2,duo%=2;
    if(duo && solo) duo=0,solo=0,trio++;
    cout<<solo+duo+trio+quad<<endl;
}