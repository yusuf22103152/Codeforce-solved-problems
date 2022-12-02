//https://codeforces.com/contest/742/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(!n) cout<<1;
    else {
        switch(n%4) {
            case 1:
               cout<<8;
               break;
           case 2:
               cout<<4;
               break;
           case 3:
               cout<<2;
               break;
           case 0:
               cout<<6;
               break;
        }
    }
    cout<<endl;
}