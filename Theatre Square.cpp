//https://codeforces.com/contest/1/problem/A
#include <iostream>
using namespace std;

int main() {
    
    long long h,w,a;
    cin>>h>>w>>a;
    
    long long hf=1,wf=1;
    for(long long r=a;h>r;r+=a) {
        hf++;
    }
    for(long long c=a;w>c;c+=a) {
        wf++;
    }
    cout<<hf*wf;
    
    
}
