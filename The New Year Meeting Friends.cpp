//https://codeforces.com/contest/723/problem/A
#include <iostream>
using namespace std;
int main() {
    int x,max,min;
    bool f=true;
    for(int i=0;i<3;i++) {
       cin>>x;
       if(f) max=x,min=x,f=false;
       else {
           if(x>max) max=x;
           if(x<min) min=x;
       }
    }
    cout<<max-min<<endl;
}