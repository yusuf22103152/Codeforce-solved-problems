//https://codeforces.com/contest/510/problem/A
#include <iostream>
using namespace std;

int main() {
    
    int n,m;
    cin>>n>>m;
    float c=1;
    
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if(i%2==0) {
                // dot series
                int f=c;
                if(j==1 && f%2==0) {
                    cout<<'#';
                    continue;
                }
                if(j==m && f%2!=0) {
                    cout<<'#';
                    break;
                }
                cout<<'.';
                
            }
            else {
                cout<<'#';
            }
        }
        cout<<endl;
        c+=0.5;
    }
    
    
    
}