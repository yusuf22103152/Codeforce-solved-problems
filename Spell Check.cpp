//https://codeforces.com/contest/1722/problem/A
#include <iostream>

using namespace std;

int main() {

  int n;
  cin >> n;
  string name = "Timur";
  while (n--) {
    int len;
    cin >> len;
    string s;
    cin >> s;
    char main = s[0];
    if (len != 5) cout << "nO" << endl;

    else {
      int common = 0;
      for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
          if (name[i] == s[j]) {
            s[j] = '0';
            common++;
            break;
          }
        }

      }
      if (common == 5) cout << "yEs";
      else cout << "nO";
      cout << endl;

    }

  }
}