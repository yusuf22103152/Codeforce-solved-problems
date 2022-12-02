//https://codeforces.com/contest/327/problem/A
#include <iostream>

using namespace std;

int main() {

  int n, sum = 0;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  int max = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      int sumTem = sum;
      for (int k = i; k <= j; k++) {
        if (a[k] == 0) sumTem += 1;
        else sumTem -= 1;
      }
      if (sumTem > max) max = sumTem;
    }
  }
  cout << max;

}