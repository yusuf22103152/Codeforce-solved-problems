//https://codeforces.com/contest/1294/problem/A
#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--) {
        int ar[3],n;
        cin>>ar[0]>>ar[1]>>ar[2]>>n;
        for(int i=0;i<3;i++) {
            for(int j=i+1;j<3;j++) {
                if(ar[j]>ar[i]) {
                    int tem=ar[i];
                    ar[i]=ar[j];
                    ar[j]=tem;
                }
            }
        }
        int a=ar[0],b=ar[1],c=ar[2];
        n-=a-b;
        n-=a-c;
        b=a,c=a;
        if(n==0 || (n>0 && n%3==0)) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    
    
}