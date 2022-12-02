//https://codeforces.com/contest/514/problem/A
#include<bits/stdc++.h>
using namespace std;
     
int main() {
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++) if(s[i]>52) s[i]=105-s[i];
    if(s[0]==48) s[0]=57;
    cout<<s<<endl;
}