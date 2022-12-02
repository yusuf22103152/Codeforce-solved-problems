//https://codeforces.com/contest/1742/problem/C
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        char m[8][8];
        for(int i=0;i<8;i++) {
            for(int j=0;j<8;j++) cin>>m[i][j];
        }
        for(int i=0;i<8;i++) {
            int r=0,b=0;
            for(int j=0;j<8;j++) {
                if(m[i][j]=='R') r++;
                if(m[j][i]=='B') b++;
            }
            if(r==8) {
                cout<<"R"<<endl;
                break;
            }
            if(b==8) {
                cout<<"B"<<endl;
                break;
            }
        }
    }

}
