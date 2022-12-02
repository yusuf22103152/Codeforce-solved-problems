//https://codeforces.com/contest/750/problem/A
#include<iostream>
using namespace std;
int main() {

    int n,k;
    cin>>n>>k;

    int timeLeft=240-k;
    int solved;
    for(int i=1;i<=n;i++) {
        timeLeft-=(5*i);
        if(timeLeft<=0) {
            solved=i;
            if(timeLeft<0) solved--;
            break;
        }
        if(i==n) solved=n;
    }
    cout<<solved;


}
