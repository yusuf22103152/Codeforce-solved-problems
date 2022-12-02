//https://codeforces.com/contest/421/problem/B
#include<bits/stdc++.h>
using namespace std;
bool mirrorable(char x) {
    if(x=='A'|| x=='H'|| x=='I'|| x=='M'|| x=='O'|| x=='T'|| x=='U'|| x=='V'|| x=='W'|| x=='X'|| x=='Y') return true;
    return false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin>>s;
    int i=0,j=s.size()-1;
    bool yes=true;
    while(j-i>=0) {
        if(s[i]!=s[j] || !mirrorable(s[i])|| !mirrorable(s[j])) {
            yes=false;
            break;
        }
        i++,j--;
    }
    yes?cout<<"YES\n":cout<<"NO\n";
}