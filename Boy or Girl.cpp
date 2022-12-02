//https://codeforces.com/contest/236/problem/A
#include <iostream>
using namespace std;
 
int main() {
    
    string s;
    cin>>s;
    
    int c=0;
    int len=s.length();
    for(int i=0;i<len;i++) {
        bool dis=true;
        for(int j=i+1;j<len;j++) {
            if(s[i]==s[j]) {
                dis=false;
            }
        }
        if(dis) c++;
    }
    if(c%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    
}