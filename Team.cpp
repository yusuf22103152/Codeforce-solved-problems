//https://codeforces.com/contest/231/problem/A
#include<iostream>
using namespace std;


int main() {

    int n;
    cin>>n;

    int res=0;

    int p1,p2,p3;

    for (int i=0;i<n;i++) {

            cin>>p1;
            cin>>p2;
            cin>>p3;

            if ((p1+p2+p3)>=2) {
                res++;
            }

    }
    cout<<res;





}
