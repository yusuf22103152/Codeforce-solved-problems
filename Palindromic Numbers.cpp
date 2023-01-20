//https://codeforces.com/contest/1700/problem/B
#include <bits/stdc++.h>
using namespace std;

int getInverse(char c,int k) {
    int x=c-48;
    return k-x;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    int t,n,k,x;
    string s;
    cin>>t;
    while(t--) {
        cin>>n>>s;
        k=9;
        if(s[0]=='9') k++;
        int pile[n],rem=0;
        for(int i=n-1;i>=0;i--) {
            x=getInverse(s[i],k);
            pile[i]=rem+x;
            if(rem) rem=0;
            if(pile[i]>=10) pile[i]-=10,rem=1;
        }
        if(s[0]=='9') pile[n-1]++;
        if(pile[n-1]==10) {
            pile[n-1]=0;
            for(int i=n-2;i>=0;i--) {
                pile[i]++;
                if(pile[i]==10) pile[i]=0;
                else break;
            }
        }
        for(auto z:pile) cout<<z;
        cout<<endl;
    }
}