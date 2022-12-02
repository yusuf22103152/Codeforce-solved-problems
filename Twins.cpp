//https://codeforces.com/contest/160/problem/A
#include <iostream>
using namespace std;
     
int main() {
        
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
    }
    int coins=1;
    int sum2=0;
    for(int j=0;j<n;j++) {
        for(int k=j+1;k<n;k++) {
            if(a[k]>a[j]) {
                int tem=a[j];
                a[j]=a[k];
                a[k]=tem;
            }
        }
        sum2+=a[j];
        if(sum2>sum/2) {
            coins+=j;
            break;
        }
    }
    cout<<coins;
}