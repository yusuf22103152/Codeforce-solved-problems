//https://codeforces.com/contest/122/problem/A
#include <iostream>
using namespace std;

bool isLuckyNum(int n) {
    int luckyNums[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i=0;i<14;i++) {
        int nOfIndex=luckyNums[i];
        if(!(n%nOfIndex)) return true;
        if(nOfIndex>n) break;
    }
    return false;
}
int main() {    
    int n;
    cin>>n;
    if(isLuckyNum(n)) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}