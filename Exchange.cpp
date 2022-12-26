//https://codeforces.com/contest/1765/problem/E
#include <bits/stdc++.h>
using namespace std;

int quests(int n,int a,int b) {
    if(a<=b && n>a) return n/a+!!(n%a);
    return 1;
}
int main() {
    int t,n,a,b;
    cin>>t;
    while(t--) cin>>n>>a>>b,cout<<quests(n,a,b)<<endl;
}