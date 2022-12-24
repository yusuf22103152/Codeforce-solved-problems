//https://codeforces.com/contest/1760/problem/D
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        int a[n],progressive=true,vShape=false,vChecked=false,regressive=true;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++) {
            if(a[i+1]<a[i]) progressive=false;
            if(a[i+1]>a[i]) regressive=false;
            if((!progressive || !regressive) && a[i+1]>a[i] && !vChecked) vShape=true;
            if(vShape && a[i+1]<a[i]) vChecked=true,vShape=false;
        }
        progressive||regressive||vShape?cout<<"yEs\n":cout<<"nO\n";
    }
}