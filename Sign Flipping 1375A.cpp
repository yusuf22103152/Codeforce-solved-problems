#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,x;
    cin>>t;
    while(t--) {
        cin>>n;
        while(n--) cin>>x,n%2?cout<<-abs(x)<<' ':cout<<abs(x)<<' ';
        cout<<endl;
    }
}