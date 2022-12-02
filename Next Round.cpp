//https://codeforces.com/contest/158/problem/A
#include<iostream>
using namespace std;
int main() {

    int n,k;
    cin>>n>>k;

    int ar[n];

    int c=0;
    for(int i=0;i<n;i++) {
            cin>>ar[i];
    }
    int p=ar[k-1];

    for(int i=0;i<n;i++) {
            if(ar[i]>=p && ar[i]>0) {
                    c++;
            }
    }
    cout<<c;


}
