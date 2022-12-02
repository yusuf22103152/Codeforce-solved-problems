//https://codeforces.com/contest/706/problem/B
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,q,y,i,max,min,out;
    cin>>n;
    int x[n];
    for(i=0;i<n;i++) cin>>x[i];
    sort(x,x+n);
    max=x[n-1],min=x[0];
    map<int,int> position,repeats;
    for(i=0;i<n;i++) position[x[i]]=i+1,repeats[x[i]]++;
    cin>>q;
    while(q--) {
        cin>>y;
        if(y>=max) out=n;
        else if(y<=min) out=repeats[y];
        else if(position[y]!=0) out=position[y];
        else {
            if(y>x[n/2]) {
                i=n-1;
                while(y<x[i]) i--;
                out=position[x[i]];
            }
            else {
                i=0;
                while(y>x[i]) i++;
                out=position[x[i-1]];
            }
        }
        cout<<out<<endl;
    }
}