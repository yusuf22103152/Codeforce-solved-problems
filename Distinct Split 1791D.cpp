#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    string s;
    cin>>t;
    while(t--) {
        cin>>n>>s;
        map<int,int> A,B,C,D;
        int max=0;
        for(int i=0,j=n-1;i<n;i++,j--) {
            C[s[i]];
            D[s[j]];
            A[i]=C.size();
            B[j]=D.size();
        }
        for(int i=0;i<n-1;i++) {
            if(A[i]+B[i+1]>max) {
                max=A[i]+B[i+1];
            }
        }
        cout<<max<<endl;
    }
}