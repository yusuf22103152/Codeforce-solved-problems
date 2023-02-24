#include <bits/stdc++.h>
using namespace std;

pair<int,int> split(int n) {
    pair<int,int> q;
    int m,o,p,y,z;
    char c,d;
    string a,b,s;
    if(n%2==0) y=n/2,z=n/2;
    else {
        a="",b="";
        stringstream ss,tt,uu;
        ss<<n;
        ss>>s;
        int t=1;
        for(char x:s) {
            m=x-48;
            if(x=='0') c='0',d='0';
            else if(m%2) {
               o=m/2,p=m/2;
               t%2? o++:p++;
               t++;
               c=o+48,d=p+48;
            }
            else c=m/2+48,d=m/2+48;
            a+=c,b+=d;
        }
        tt<<a,tt>>y,uu<<b,uu>>z;
    }
    q.first=y,q.second=z;
    return q;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--) {
       cin>>n;
       pair<int,int> q=split(n);
       cout<<q.first<<" "<<q.second<<endl;
    }
}