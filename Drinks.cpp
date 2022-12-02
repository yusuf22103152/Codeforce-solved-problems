//https://codeforces.com/contest/200/problem/B
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    float ar[n];
    float sum=0;
    for(int i=0;i<n;i++) {
        cin>>ar[i];
        sum+=ar[i];
    }
    float f=sum/n;
    cout<<f;
}