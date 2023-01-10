#include <bits/stdc++.h>
using namespace std;

int ans(int a,int x,int y) {
    if(x<0 || y<0 || x>a || y>a) return 2;
    if(!x || !y || x==a || y==a) return 1;
    return 0;
}
int main() {
    int a,x,y;
    cin>>a>>x>>y;
    cout<<ans(a,x,y)<<endl;
}