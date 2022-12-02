//https://codeforces.com/contest/1746/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    while(t--) {
        bool yes=false;
        cin>>n>>k;
        while(n--) {
            cin>>k;
            if(k==1) yes=true;
        }
        yes?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
}
