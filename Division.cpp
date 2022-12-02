//https://codeforces.com/contest/1669/problem/A
#include <bits/stdc++.h>
using namespace std;

string setDiv(int r) {
    char div;
    if(r>=1900) div='1';
    else if(r>=1600) div='2';
    else if(r>=1400) div='3';
    else div='4';
    string s="Division ";
    s+=div;
    return s;
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int rat;
        cin>>rat;
        cout<<setDiv(rat)<<endl;
    }
}