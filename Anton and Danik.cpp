//https://codeforces.com/contest/734/problem/A
#include <iostream>
using namespace std;


int main() {
    
    int n,A=0;
    char c;
    cin>>n;
    const int nSaved=n;
    while(n--) {
        cin>>c;
        if(c=='A') A++;
    }
    int D=nSaved-A;
    if(A>D) cout<<"Anton";
    else if(A<D) cout<<"Danik";
    else cout<<"Friendship";
    
    
}