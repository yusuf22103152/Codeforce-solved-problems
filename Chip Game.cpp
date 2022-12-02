//https://codeforces.com/contest/1719/problem/A
#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    string winList[t];
    long int m,n;
    for (int i=0;i<t;i++) {
        cin>>m>>n;
        if((m+n)%2==0) {
            winList[i]="Tonya";
        }
        else {
            winList[i]="Burenka";
        }
    }
    for(int i=0;i<t;i++) {
        cout<<winList[i]<<endl;
    }
    
}