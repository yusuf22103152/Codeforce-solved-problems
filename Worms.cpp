//https://codeforces.com/contest/474/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n,m,x;
    cin>>n;
    vector<int> v;
    v.push_back(0);
    while(n--) cin>>x,v.push_back(x+v.back());
    cin>>m;
    while(m--) {
        cin>>x;
        int i=1,j=v.size()-1,mid=(i+j)/2,index=mid;
        while(!(x<=v[mid] && x>v[mid-1])) {
            mid=(i+j)/2;
            if(x<=v[mid] && x>v[mid-1]) index=mid;
            else if(x>v[mid]) i=mid+1;
            else j=mid-1;
        }
        cout<<index<<endl;
    }
}