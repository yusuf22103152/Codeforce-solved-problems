//https://codeforces.com/contest/318/problem/A
#include <iostream>
using namespace std;

long long oddsBe4Even;
bool nIsEven=false;
bool isinEvenSerial(long long n,long long k) {
    oddsBe4Even=n/2;
    if(n%2==0){
        nIsEven=true;
        if(k>n/2) return true;
        return false;
    }
    else {
        oddsBe4Even++;
        if(k>n/2+1) return true;
        return false;
    }
}

int main() {
    long long n,k;
    cin>>n>>k;
    long long ans;
    if(isinEvenSerial(n,k)) ans=2*(k-oddsBe4Even);
    else ans=2*k-1;
    cout<<ans<<endl;
}