//https://codeforces.com/contest/1374/problem/C
#include <iostream>
using namespace std;

int main() {
    int t,n,l,r,x,y;
    char c;
    cin>>t;
    while(t--) {
        cin>>n,l=0,r=0;
        while (n--) cin>>c,x=c=='('?1:0,r+=x,y=r>0&&!x?1:0,r-=y,l+=y;
        cout<<r<<endl;
    }
}