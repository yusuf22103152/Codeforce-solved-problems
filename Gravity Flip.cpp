//https://codeforces.com/contest/405/problem/A
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[i]>a[j]) {
                int tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
        cout<<a[i]<<" ";
    }
    cout<<endl;
}