#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    int x,y;
    cin>>t;
    while(t--) {
        cin>>n,cout<<n<<endl;
        for(int i=1;i<=n;i++) cin>>x,y=pow(2,ceil(log2(x)))-x,cout<<i<<" "<<y<<endl;
    }
}