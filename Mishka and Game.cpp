//https://codeforces.com/contest/703/problem/A
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int mWins=0,cWins=0;
    while (n--) {
        int m,c;
        cin>>m>>c;
        if(m>c) mWins++;
        else if(m<c) cWins++;
    }
    if(mWins==cWins) cout<<"Friendship is magic!^^";
    else if(mWins>cWins) cout<<"Mishka";
    else cout<<"Chris";
}