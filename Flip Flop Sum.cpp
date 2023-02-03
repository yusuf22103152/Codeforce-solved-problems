//https://codeforces.com/contest/1778/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        bool flipped=false;
        for(int i=0;i<n-1;i++) {
            if(a[i]==-1 && a[i+1]==-1) {
                a[i]=1;
                a[i+1]=1;
                flipped=true;
                break;
            }
        }
        if(!flipped) {
            for(int i=0;i<n-1;i++) {
            if((a[i]==-1 && a[i+1]==1) || (a[i]==1 && a[i+1]==-1)) {
                flipped=true;
                break;
            }
            }
        }
        if(flipped) {
            int sum=0;
            for(int i=0;i<n;i++) sum+=a[i];
            cout<<sum<<endl;
        }
        else cout<<n-4<<endl;
        
    }
    
    
}