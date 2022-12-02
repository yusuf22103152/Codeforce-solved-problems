//https://codeforces.com/contest/489/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int nb,ng;
    cin>>nb;
    int b[nb];
    for(int i=0;i<nb;i++) cin>>b[i];
    cin>>ng;
    int g[ng];
    for(int i=0;i<ng;i++) cin>>g[i];
    sort(b,b+nb);
    sort(g,g+ng);
    int pairs=0;
    for(int i=0;i<nb;i++) {
        const int bSk=b[i];
        for(int j=0;j<ng;j++) {
            int gSk=g[j];
            if(bSk>=g[j]-1 && bSk<=g[j]+1 && g[j]!=0) {
                g[j]=0,pairs++;
                break;
            }
        }
    }
    cout<<pairs<<endl;
}