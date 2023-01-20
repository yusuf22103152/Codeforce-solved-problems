//https://codeforces.com/contest/343/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    char x;
    int c;
    cin>>s;
    s+="0";
    vector<char> v;
    for(int i=0;i<s.size()-1;i++) {
        x=s[i];
        int c=1;
        while (x==s[i+1]) {
            c++;
            i++;
            if(i>=s.size()-1) break;
        }
        if(c%2==0) continue;
        v.push_back(x);
        if(v.size()>1 && v.back()==v[v.size()-2]) v.pop_back(),v.pop_back();
    }
    v.size()? cout<<"No"<<endl:cout<<"Yes"<<endl;
}