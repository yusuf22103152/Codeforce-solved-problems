//https://codeforces.com/contest/1355/problem/A
#include <bits/stdc++.h>
using namespace std;

int getDigit(long long int x,bool getMax=false) {
    stringstream ss;
    ss<<x;
    string s;
    ss>>s;
    int min=s[0]-48,max=min;
    for(int i=0;i<s.size();i++) {
        int ix=s[i]-48;
        if(ix<min) min=ix;
        if(ix>max) max=ix;
    }
    if(getMax) return max;
    return min;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    long long int n,k;
    cin>>t;
    while(t--) {
        cin>>n>>k;
        for(int i=1;i<k;i++) {
            //cout<<n<<"+"<<getDigit(n)<<"."<<getDigit(n,true)<<"="<<n+getDigit(n)*getDigit(n,true)<<endl;
            if(!(getDigit(n)*getDigit(n,true))) break;
            n+=getDigit(n)*getDigit(n,true);
        }
        cout<<n<<endl;
    }
}