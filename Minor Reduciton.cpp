//https://codeforces.com/contest/1626/problem/B
#include <bits/stdc++.h>
using namespace std;

int toInt(char c) {
    int n=c-48;
    return n;
}
char toChar(int n) {
    char c=n+48;
    return c;
}
string minorRed(string s) {
    deque<char> c,d;
    for(int i=s.size()-1;i>0;i--) {             
        d.push_front(s[i]);
        if(toInt(s[i]+toInt(s[i-1]))>9) {
            d.pop_front();
            string u=to_string(toInt(s[i])+toInt(s[i-1]));
            d.push_front(u[1]);
            d.push_front(u[0]);
            for(i-=2;i>=0;i--) d.push_front(s[i]);
            string a{d.begin(),d.end()};
            return a;
        }
    }
    c.push_back(toChar(toInt(s[0])+toInt(s[1])));
    for(int i=2;i<s.size();i++) c.push_back(s[i]); 
    string a{c.begin(),c.end()};
    return a;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    string x;
    cin>>t;
    while(t--) cin>>x,cout<<minorRed(x)<<endl;
}



