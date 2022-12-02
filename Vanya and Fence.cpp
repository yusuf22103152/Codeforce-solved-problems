//https://codeforces.com/contest/677/problem/A
#include<iostream>
using namespace std;

int main() {

    int n,h;
    cin>>n>>h;
    int a[n];

    int c=n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]>h) {
            c++;
        }
    }
    cout<<c;


}
