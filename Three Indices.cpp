//https://codeforces.com/contest/1380/problem/A
#include <bits/stdc++.h>
using namespace std;


int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        int max=0;
        for(int i=0;i<n;i++) cin>>a[i];
        int l=0,r=n-1;
        int I,J,K;
        bool found=false;
        while(r-l>1) {
            for(int i=l+1;i<r;i++) {
                if(a[i]>a[l] && a[i]>a[r]) {
                    found=true;
                    I=l+1,J=i+1,K=r+1;
                    break;
                }
            }
            if(found) break;
            if(a[l]>a[r]) l++;
            else r--;
        }
        if(found) {
            cout<<"yes"<<endl<<I<<" "<<J<<" "<<K<<endl;
        }
        else cout<<"no"<<endl;
    }
}
    
    
    
    
  