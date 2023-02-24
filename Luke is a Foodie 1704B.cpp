#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,x,y,c;
    cin>>t;
    while(t--) {
        cin>>n>>x>>y;
        pair<int,int> range;
        c=0,range.first=y-x,range.second=y+x;
        while(--n) {
            cin>>y;
            range.first=max(range.first,y-x);
            range.second=min(range.second,y+x);
            if(range.second-range.first<0) c++,range.first=y-x,range.second=y+x;
        }
        cout<<c<<endl;
    }
}