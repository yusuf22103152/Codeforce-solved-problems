#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    long long int c,q;
    for(cin>>q;q--;) {
        string s,t;
        cin>>s>>t;
        if(t=="a") c=1;
        else {
            bool hasA=false;
            for(auto x:t) {
                if(x=='a') {
                    hasA=true;
                    break;
                }
            }
            if(hasA) c=-1;
            else {
                c=pow(2,s.size());
            }
        }
        cout<<c<<endl;
    }
}