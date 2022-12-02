//https://codeforces.com/contest/69/problem/A
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int sumX=0,sumY=0,sumZ=0;
    while(n--) {
        int x,y,z;
        cin>>x>>y>>z;
        sumX+=x;
        sumY+=y;
        sumZ+=z;
    }
    if(!sumX && !sumY && !sumZ) cout<<"YES";
    else cout<<"NO";
    
}