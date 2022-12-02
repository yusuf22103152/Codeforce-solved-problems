//https://codeforces.com/contest/112/problem/A
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    
    string a,b;
    cin>>a>>b;
    
    int res=0;
    for(int i=0;i<a.length();i++) {
        
        int c=tolower(a[i]),d=tolower(b[i]);
       
        if(c>d) {
            res++;
            break;
        }
        else if(c<d){
            res--;
            break;
        }
    }
    cout<<res;
    
    
}
