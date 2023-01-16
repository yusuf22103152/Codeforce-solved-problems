//https://codeforces.com/contest/1676/problem/E
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,q,x,f,b;
    cin>>t;
    while(t--) {
        cin>>n>>q;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n,greater<int>());
        vector<int> v;
        v.push_back(0);
        for(int i=0;i<n;i++) v.push_back(a[i]+v.back());
        auto i0 = v.begin();
        v.erase(i0);
        while(q--) {
            cin>>x;
            if(x==v[n-1]) cout<<n<<endl;
            else if(x>v[n-1]) cout<<-1<<endl;
            else if(x<=v[0]) cout<<1<<endl;
            else {
                f=0,b=n;
                while(!(x>v[f] && x<=v[f+1])) {
                    if(x>=v[(f+b)/2]) f=(f+b)/2;
                    else b=(f+b)/2;
                    if(x==v[f]) {
                        f--;
                        break;
                    }
                }
                cout<<f+2<<endl;
            }
        }
    }
}