//https://codeforces.com/problemset/problem/1669/F
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,A,B,maxEat;
    long long int Aw,Bw;
    cin>>t;
    while(t--) {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        A=0,B=n-1,Aw=a[0],Bw=a[n-1];
        maxEat=0;
        while(B>A) {
            if(Aw==Bw) maxEat=A+1+n-B;
            if(Aw>Bw) B--,Bw+=a[B];
            else A++,Aw+=a[A];
        }
        cout<<maxEat<<endl;
    }
}