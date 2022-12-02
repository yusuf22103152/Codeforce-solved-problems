//https://codeforces.com/contest/4/problem/C
#include <iostream>

using namespace std;

int main() {

  int n;
  cin >> n;
  string s[n];
  int a[n];
  if (n == 1) cout << "OK";
  else {
      
      for(int i=0;i<n;i++) {
          cin>>s[i];
          a[i]=1;
          for(int j=0;j<i;j++) {
              if(s[i]==s[j]) {
                  s[i]=s[j]+to_string(a[j]);
                  a[j]++;
                  break;
              }
          }
          if (!isdigit(s[i].at(s[i].length() - 1))) cout << "OK";
          else cout << s[i];
          cout<<endl;
      }

  }
}