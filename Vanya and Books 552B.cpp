#include <bits/stdc++.h>
using namespace std;

int intSize(int n) {
    stringstream ss;
    ss<<n;
    string s;
    ss>>s;
    return s.size();
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    if(n<=9) cout<<n<<endl;
    else {
        long long int rv=n,sm=9;
        while(rv!=9) {
            int lb=pow(10,intSize(rv)-1);
            sm+=(rv-lb+1)*intSize(rv);
            rv=lb-1;
        }
        cout<<sm<<endl;;
    }
}