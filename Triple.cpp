//https://codeforces.com/contest/1669/problem/B
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,x,z;
    cin>>t;
    while(t--) {
        cin>>n;
        map<int,int> m;
        z=-1;
        while(n--) {
            cin>>x;
            if(z==-1) m[x]++;
            if(m[x]==3) z=x;
        }
        cout<<z<<endl;
    }
}