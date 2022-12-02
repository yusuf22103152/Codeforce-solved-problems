//https://codeforces.com/contest/1703/problem/B
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int t;
    cin>>t;
    
    while(t--) {
        map<char,int> problems;
        int len;
        string s;
        cin>>len>>s;
        int balloons=0;
        for(int i=0;i<len;i++) {
            problems[s[i]]++;
        }
        for(auto i:problems) {
            if(i.second>1) balloons+=i.second-1;
        }
        balloons+=problems.size()*2;
        cout<<balloons<<endl;
    }
    
    
}