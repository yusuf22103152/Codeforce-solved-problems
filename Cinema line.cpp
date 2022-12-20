//https://codeforces.com/contest/349/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    map<int,int> m;
    int n,x;
    bool yes=true;
    cin>>n;
    while(n--) {
        cin>>x;
        switch(x) {
            case 50:
               if(m[25]) m[25]--;
               else yes=false;
               break;
            case 100:
               if(m[50] && m[25]) m[50]--,m[25]--;
               else if(m[25]>=3) m[25]-=3;
               else yes=false;
               break;
        }
        if(!yes) break;
        m[x]++;
    }
    yes?cout<<"YES\n":cout<<"NO\n";
}