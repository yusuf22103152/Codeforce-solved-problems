//https://codeforces.com/contest/1744/problem/C
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,n,reps,a,maxDelay;
    bool gotIt=false;
    string s;
    char c;
    cin>>t;
    while(t--) {
        cin>>n>>c>>s,s+=s,reps=0,maxDelay=0,gotIt=false;
        for(char x:s) {
            reps++;
            if(!gotIt && x==c) gotIt=true,a=reps;
            if(gotIt && x=='g') {
                if(reps-a>maxDelay) {
                    maxDelay=reps-a;
                    if(reps>n) break;
                }
                gotIt=false;
            }
        }
        cout<<maxDelay<<endl;
    }
}