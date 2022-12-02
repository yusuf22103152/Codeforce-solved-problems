//https://codeforces.com/contest/1535/problem/A
#include <iostream>
using namespace std;
int main() {
    int t,a,b,c,d;
    cin>>t;
    while(t--) {
        cin>>a>>b>>c>>d;
        int winner1=a>b?a:b,winner2=c>d?c:d,looser1=a==winner1?b:a,looser2=c==winner2?d:c;
        if(looser1>winner2 || looser2>winner1) cout<<"NO"; else cout<<"YES"; cout<<endl;
    }
}