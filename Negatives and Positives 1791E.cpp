#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,x,y,min;
    long long int sum;
    cin>>t;
    while(t--) {
        cin>>n;
        int a[n];
        x=0,sum=0;
        bool fTouch=true;
        while(n--) {
            cin>>y;
            if(fTouch) min=abs(y);
            else if(abs(y)<min) min=abs(y);
            x+=y<0;
            sum+=abs(y);
            fTouch=false;
        }
        cout<<sum-((x%2)*min*2)<<endl;
    }
}