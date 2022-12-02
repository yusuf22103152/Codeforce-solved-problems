//https://codeforces.com/contest/432/problem/A
#include <iostream>
using namespace std;

int main() {
    
    int n,k;
    cin>>n>>k;
    
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[i]>a[j]) {
                int tem=a[j];
                a[j]=a[i];
                a[i]=tem;
            }
        }
    }
    /*
    for(int i=0;i<n;i++) {
        cout<<a[i]<<"...";
    }*/
    int teams=0;
    for(int p=0;p<n-2;p+=3) {
        int c=0;
        int m1=a[p],m2=a[p+1],m3=a[p+2];
        while(m1<5 && m2<5 && m3<5) {
            m1++,m2++,m3++;
            c++;
        }
        if(c>=k) teams++;
    }
    cout<<teams;
    
    
}