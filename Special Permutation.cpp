//https://codeforces.com/contest/1454/problem/A
#include <iostream>
using namespace std;
int main() {
    
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int oddMid=n/2+1;
        bool even=false;
        if(n%2==0) even=true;
        do {
            if(!even) {
                if(n==oddMid) {
                    cout<<1<<" ";
                }
                else if(n==1) break;
            } 
            cout<<n<<" ";
        }
        while(--n);
        cout<<endl;
        
    }
}