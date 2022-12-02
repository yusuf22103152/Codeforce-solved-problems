//https://codeforces.com/contest/151/problem/A
#include <iostream>
using namespace std;
     
int main() {
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drinks=k*l,limePcs=c*d;
    int toasts=0;
    while(drinks>0 && limePcs>0 && p>0 ) {
        drinks-=nl;
        limePcs-=1;
        p-=np;
        if(drinks<0 || limePcs<0 || p<0) break;
        toasts++;
    }
    cout<<toasts/n;
}