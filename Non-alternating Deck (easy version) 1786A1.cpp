#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        int A=0,B=0,x=1,c=1;
        A++,x++,n--;
        while(n!=0) {
            if(c%2) {
                B+=x;
                n-=x;
                x++;
                if(n>=x) {
                    B+=x;
                    n-=x;
                    x++;
                }
                else {
                    B+=n;
                    break;
                }
            }
            else {
                A+=x;
                n-=x;
                x++;
                if(n>=x) {
                    A+=x;
                    n-=x;
                    x++;
                }
                else {
                    A+=n;
                    break;
                }
            }
            c++;
        }
        cout<<A<<" "<<B<<endl;
    }
}