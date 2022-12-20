#include <bits/stdc++.h>
using namespace std;

string iNeed9s(int n) {
    string s="";
    while(n--) s+='9';
    return s;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--) cin>>n,n==1?cout<<-1<<endl:cout<<2<<iNeed9s(n-1)<<endl;
}