//https://codeforces.com/contest/1154/problem/A
#include <iostream>
using namespace std;

int main() {
    int ar[4];
    for(int i=0;i<4;i++) {
        cin>>ar[i];
    }
    for(int i=0;i<4;i++) {
        for(int j=i+1;j<4;j++) {
            if(ar[i]<ar[j]) {
                int tem=ar[i];
                ar[i]=ar[j];
                ar[j]=tem;
            }
        }
    }
    int ab=ar[1],ac=ar[2],bc=ar[3];
    int b=((ab-ac)+bc)/2;
    int c=bc-b;
    int a=ac-c;
    cout<<a<<" "<<b<<" "<<c;
}