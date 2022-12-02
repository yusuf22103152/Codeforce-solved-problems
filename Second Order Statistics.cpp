//https://codeforces.com/contest/22/problem/A
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  if (n == 1) cout << "NO";
  else {
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (a[i] == a[j]) a[j] = 0;
        if (a[j] < a[i]) {
          int tem = a[i];
          a[i] = a[j];
          a[j] = tem;
        }
      }
    }
    int c = 0, index;
    for (int i = 0; i < n; i++) {
      if (a[i] != 0) c++;
      if (c == 2) {
        index = i;
        break;
      }
    }
    if (c < 2) cout << "NO";
    else cout << a[index] << endl;
  }
  /*
  for(int i=0;i<n;i++) {
      cout<<".."<<a[i]<<endl;
  }*/

}