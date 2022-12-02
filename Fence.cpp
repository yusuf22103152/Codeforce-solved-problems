//https://codeforces.com/contest/363/problem/B
#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k,idx=1,iS=0,mS;
    cin>>n>>k;
    int y[n];
    for(int i=0;i<n;i++) {
        cin>>y[i];
        if(i<k) iS+=y[i],mS=iS;
        else {
            iS=iS-y[i-k]+y[i];
            if(iS<mS) mS=iS,idx=i-k+2;
        }
    }
    cout<<idx<<endl;
}