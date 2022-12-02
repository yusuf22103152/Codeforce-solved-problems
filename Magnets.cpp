//https://codeforces.com/contest/344/problem/A
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int magnets[n];
    int magnet;
    for(int i=0;i<n;i++) {
        cin>>magnet;
        magnets[i]=magnet;
    }
    int c=1;
    int cmp1,cmp2;
    if(magnets[0]==1){
        cmp1=1;
        cmp2=10;
        
    }
    else {
        cmp1=10;
        cmp2=1;
    }
        
    for(int i=1;i<n;i++) {
        if(magnets[i]==cmp2) {
            c++;
            int t=cmp1;
            cmp1=cmp2;
            cmp2=t;
        }
    }
    cout<<c;
    
    
    
} 