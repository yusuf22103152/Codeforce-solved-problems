//https://codeforces.com/contest/1759/problem/C
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int l,r,x,a,b,z=2;
        cin>>l>>r>>x>>a>>b;
        if(a==b) z=0;
        else if((x>b-l && x>r-b)||(x>a-l && x>r-a)) z=-1;
        else if(abs(a-b)>=x) z=1;
        else if((a<b && a-l<x && r-b<x) || (a>b && r-a<x && b-l<x)) z++;
        cout<<z<<endl;
    }
}