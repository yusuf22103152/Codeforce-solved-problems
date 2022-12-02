//https://codeforces.com/contest/1328/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;
    cin>>t;
    while(t--) {
        long long int n,k;
        cin>>n>>k;
        long long int root=round(sqrt(2*k));
        long long int pos1=n-root;
        long long int highBranch=root*(root+1)/2;
        long long int pos2=pos1+(highBranch-k)+1;
        for(long long int i=1;i<=n;i++) {
            if(i==pos1 || i==pos2) cout<<'b';
            else cout<<'a';
        }
        cout<<endl;
    }
}