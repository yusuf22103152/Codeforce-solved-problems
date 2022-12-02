//https://codeforces.com/contest/271/problem/A
#include <iostream>
using namespace std;

int main() {
    
    int d[4];
    int yr;
    cin>>yr;
    
    bool distinct;
    
    do {
        yr++;
        int yTem=yr;
        
        for(int r=0;r<4;r++) {
        int m=yTem%10;
        yTem/=10;
        d[r]=m;
        }
    
        int w=d[0],x=d[1],y=d[2],z=d[3];
        if(w==x || w==y ||w==z || x==z || y==z || x==y ) {
            distinct=false;
        }
        else {
            distinct=true;
        }
        
        
    } while (!distinct);
    
    cout<<yr;
    
    
    
    
    
}