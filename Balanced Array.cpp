//https://codeforces.com/contest/1343/problem/B
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++) {
        cin>>a[i];
        int n=a[i];
        int se=0,so=0,b[n];
        int e=0,o=n/2;
        for(int i=1;i<=n;i++) {
            if(i%2==0) {
                b[e]=i;
                e++;
                se+=i;
            }
            else {
                b[o]=i;
                o++;
                so+=i;
            }
        }
        bool yes=true;
        while(so!=se) {
            b[n-1]+=2;
            so+=2;
            if(so>se) {
                yes=false;
                break;
            }
        }
        if(yes) {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++) {
                cout<<b[i]<<" ";
            }
        }
        else cout<<"NO";
        cout<<endl;
    }
    
    
    
    
}