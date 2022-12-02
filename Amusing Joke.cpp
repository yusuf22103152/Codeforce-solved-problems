//https://codeforces.com/contest/141/problem/A
#include <iostream>

using namespace std;

int main() {

  string g, h, p;
  cin >> g >> h >> p;

  string s = g + h;
  if (p.length() != s.length()) cout << "NO";
  else {
    int c = 0;
    for (int i = 0; i < p.length(); i++) {
      for (int j = 0; j < p.length(); j++) {
        if (p[i] == s[j]) {
          s[j] = '0';
          c++;
          break;
        }
      }
    }
    if (c == p.length()) cout << "YES";
    else cout << "NO";

  }

}