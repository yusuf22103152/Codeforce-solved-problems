//https://codeforces.com/contest/1720/problem/C
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,m,x,c;
    char ch;
    bool neutral;
    cin>>t;
    for(int i=1;i<=t;i++) {
        cin>>n>>m;
        c=0;
        int bins[n][m],b[n][m];
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>ch,bins[i][j]=ch-48,b[i][j]=ch-48;
        while(1) {
            restart:
            //wave1
            neutral=true;
            for(int i=0;i<n-1;i++) {
                for(int j=0;j<m-1;j++) {
                    x=bins[i][j]+bins[i][j+1]+bins[i+1][j]+bins[i+1][j+1];
                    if(x==1) {
                        bins[i][j]=0,bins[i][j+1]=0,bins[i+1][j]=0,bins[i+1][j+1]=0;
                        c++;
                        neutral=false;
                    }
                }
            }
            //wave2
            for(int i=0;i<n-1;i++) {
                for(int j=0;j<m-1;j++) {
                    x=bins[i][j]+bins[i][j+1]+bins[i+1][j]+bins[i+1][j+1];
                    if(x==2) {
                        bins[i][j]=0,bins[i][j+1]=0,bins[i+1][j]=0,bins[i+1][j+1]=0;
                        c+=2;
                        neutral=false;
                    }
                    if(!neutral) goto restart;
                }
            }
            //wave3
            for(int i=0;i<n-1;i++) {
                for(int j=0;j<m-1;j++) {
                    x=bins[i][j]+bins[i][j+1]+bins[i+1][j]+bins[i+1][j+1];
                    if(x==3) {
                        bins[i][j]=0,bins[i][j+1]=0,bins[i+1][j]=0,bins[i+1][j+1]=0;
                        c+=2;
                        neutral=false;
                    }
                    if(!neutral) goto restart;
                }
            }
            //wave4
            for(int i=0;i<n-1;i++) {
                for(int j=0;j<m-1;j++) {
                    x=bins[i][j]+bins[i][j+1]+bins[i+1][j]+bins[i+1][j+1];
                    if(x==4) {
                        bins[i][j]=0,bins[i][j+1]=0,bins[i+1][j]=0,bins[i+1][j+1]=0;
                        c+=2;
                        neutral=false;
                    }
                    if(!neutral) goto restart;
                }
            }
            if(neutral) break;
        }
        cout<<c<<endl;
    }
}