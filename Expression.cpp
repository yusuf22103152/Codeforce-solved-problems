//https://codeforces.com/contest/479/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v;
    int a,b,c;
    cin>>a>>b>>c;
    v.push_back(a+b+c);
    v.push_back((a+b)*c);
    v.push_back(a+(b*c));
    v.push_back((a*b)+c);
    v.push_back(a*(b+c));
    v.push_back(a*b*c);
    sort(v.begin(),v.end(),greater<int>());
    cout<<v[0]<<endl;
}