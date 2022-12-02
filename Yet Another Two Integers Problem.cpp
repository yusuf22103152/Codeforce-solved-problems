//https://codeforces.com/contest/1409/problem/A
#include <iostream>
using namespace std;
int main() {
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++) {
        
        int a,b,c,d;
        cin>>c>>d;
        if(c>d) {
            a=c;
            b=d;
        }
        else {
            a=d;
            b=c;
        }
        int n=a-b;
        int res=n/10;
        if(n%10!=0) res++;
        cout<<res<<endl;
        
    }

}