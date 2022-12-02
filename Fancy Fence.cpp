//https://codeforces.com/contest/270/problem/A
#include <bits/stdc++.h>
using namespace std;

bool isInt(float fArg) {
    float fTem=(int) fArg;
    if(fArg==fTem) return true;
    return false;
}
float sides(int angle) {
    return (float) 360/(180-angle);
}
string output(int a) {
    if(isInt(sides(a)) && sides(a)>=3) return "YES";
    return "NO";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,a;
    cin>>t;
    while(t--) cin>>a,cout<<output(a)<<endl;
}