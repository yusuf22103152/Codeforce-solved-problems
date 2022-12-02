//https://codeforces.com/contest/1030/problem/A
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int a;
    bool hard=false;
    while(n--) {
        cin>>a;
        if(a==1) {
            cout<<"hArD";
            hard=true;
            break;
        }
    }
    if(!hard) cout<<"eAsY";
    
    
}