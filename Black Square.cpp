//https://codeforces.com/contest/431/problem/A
#include<iostream>
#include<sstream>
using namespace std;

int main() {


    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    string s;
    cin>>s;
    int cal=0;
    for(int i=0;i<s.length();i++) {
      stringstream ss;
      char c=s[i];
      ss<<c;
      int n;
      ss>>n;
      cal+=a[n-1];
    }
    cout<<cal;




}
