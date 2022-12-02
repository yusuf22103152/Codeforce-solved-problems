//https://codeforces.com/contest/758/problem/A
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int a[n];
    
    cin>>a[0];
    int max=a[0],inneed=0;
    for(int i=1;i<n;i++) {
        cin>>a[i];
        if(a[i]>max) max=a[i];
    }
    for(int j=0;j<n;j++) {
        inneed+=(max-a[j]);
    }
    cout<<inneed;
    
    
}