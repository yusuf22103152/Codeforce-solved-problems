//https://codeforces.com/contest/381/problem/A
#include <iostream>
using namespace std;
int main() {
    
    int n;
    cin>>n;

    int a[n],p1=0,p2=0;
    
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int l=0,r=n-1;
    
    bool turnOfP1=true;
    while(r-l>=0) {
        if(a[l]>a[r]) {
            if(turnOfP1) {
                p1+=a[l];
            }
            else {
                p2+=a[l];
            }
            l++;
        }
        else {
            if(turnOfP1) {
                p1+=a[r];
              
            }
            else {
                p2+=a[r];
            }
            r--;
        }
        if(turnOfP1) turnOfP1=false;
        else turnOfP1=true;
    }
    cout<<p1<<endl<<p2;
    
    
    
}