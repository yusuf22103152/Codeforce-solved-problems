//https://codeforces.com/contest/173/problem/A
#include<bits/stdc++.h>
using namespace std;
bool pinched(char c,char d) {
    if((c=='R' && d=='P') || (c=='P' && d=='S') || (c=='S' && d=='R')) return 1;
    return 0;
}
string operator*(string s,int n) {
    string t="";
    while(n--) t+=s;
    return t;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    long long int n;
    int a,b;
    string p1,p2;
    cin>>n;
    cin>>p1>>p2;
    int x=p1.length(),y=p2.length();
    if(x!=y) p1=p1*y,p2=p2*x;
    x=p1.length();
    int v1[x],v2[x];
    int sP1=0,sP2=0;
    for(int i=0;i<x;i++) {
        sP1+=pinched(p1[i],p2[i]);
        sP2+=pinched(p2[i],p1[i]);
        v1[i]=sP1;
        v2[i]=sP2;
    }
    int iTem=n%x;
    if(iTem>0) iTem--;
    a=v1[x-1]*(n/x)+v1[iTem]*(n%x!=0);
    b=v2[x-1]*(n/x)+v2[iTem]*(n%x!=0);
    cout<<a<<" "<<b<<endl;
}