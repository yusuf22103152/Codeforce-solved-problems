//https://codeforces.com/contest/25/problem/A

#include <iostream>
using namespace std;

int main()
{
    int n,evens=0;
    cin>>n;
    int ar[n];
    int index;
    
    for(int i=0;i<n;i++) {
        cin>>ar[i];
        if(ar[i]%2==0) {
            evens++;
        }
    }
        for(int i=0;i<n;i++) {
            if(ar[i]%2==0 && evens==1) {
                index=i+1;
                break;
            }
            else  if(ar[i]%2!=0 && evens!=1) {
                index=i+1;
                break;
            }
        }
    cout<<index;
}
