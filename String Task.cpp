//https://codeforces.com/contest/118/problem/A
#include<iostream>
using namespace std;
bool notVowel(char x) {char c=tolower(x);if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u' && c!='y')return true;return false;}
int main() {string s,t="";cin>>s;for(char c:s) if(notVowel(c)) {char x=tolower(c);cout<<'.'<<x;}}
