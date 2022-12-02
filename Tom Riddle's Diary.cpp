//https://codeforces.com/contest/855/problem/A
#include <iostream>

using namespace std;

int main() {

  int n;
  cin >> n;
  string s[n];
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  if (n == 1) cout << "NO";
  else {
    for (int i = 0; i < n; i++) {
      int possessed = false;
      for (int j = i - 1; j >= 0; j--) {
        if (s[i] == s[j]) {
          possessed = true;
        }
      }
      if (possessed) cout << "YES";
      else cout << "NO";
      cout << endl;
    }
  }

}