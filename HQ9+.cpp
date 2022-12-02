//https://codeforces.com/contest/133/problem/A
#include <iostream>
using namespace std;

int main() {
    
    string s;
    cin>>s;
    
    bool b=0;
    for(int i=0;i<s.length();i++) {
      char c=s[i];
      if(c=='H'||c=='Q'||c=='9') {
          cout<<"YES";
          break;
      }
      if(i==s.length()-1) {
        cout<<"NO";
      }
    }
    
    
}