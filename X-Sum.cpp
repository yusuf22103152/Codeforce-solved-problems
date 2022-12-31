//https://codeforces.com/contest/1676/problem/D
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,m;
    cin>>t;
    while(t--) {
        cin>>n>>m;
        int a[n][m],xSum=0;
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j];
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                int LT=0,RT=0,LB=0,RB=0,x,y,sum=0;
                x=i,y=j;
                while(x>=0 && y>=0) LT+=a[x][y],x--,y--;
                x=i,y=j;
                while(x>=0 && y<m) RT+=a[x][y],x--,y++;
                x=i,y=j;
                while(x<n && y>=0) LB+=a[x][y],x++,y--;
                x=i,y=j;
                while(x<n && y<m) RB+=a[x][y],x++,y++;
                sum=LT+RT+LB+RB-a[i][j]*3;
                if(sum>xSum) xSum=sum;
            }
        }
        cout<<xSum<<endl;
    }
}