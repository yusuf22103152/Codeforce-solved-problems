//https://codeforces.com/contest/228/problem/A
#include <iostream>
using namespace std;

int main() {
    
    int a[4];
    for(int i=0;i<4;i++) {
        cin>>a[i];
    }
    int h=0;
    for(int i=0;i<4;i++) {
        for(int j=i+1;j<4;j++) {
            if(a[i]==a[j] && a[i]!=0) {
                a[j]=0;
                h++;
            }
        }
    }
    cout<<h;
    
}