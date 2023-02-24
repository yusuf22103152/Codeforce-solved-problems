#include <bits/stdc++.h>
using namespace std;
#define setup ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);int t,n,x;string s;long long int sum=0;
#define answer(x) x?cout<<"YES"<<endl:cout<<"NO"<<endl;
#define newl cout<<endl;

bool isInt(long double n) {
    long long int x=n;
    return x==n;
}
int main() {
    setup
    cin>>t;
    while(t--) {
       cin>>n;
       bool looped=false;
       while (n%2==0) n/=2,looped=true;
       answer(looped && isInt(sqrt(n)));
    }
}