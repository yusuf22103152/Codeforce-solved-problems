//https://codeforces.com/contest/489/problem/C
#include bitsstdc++.h
using namespace std;
int main() {
    iossync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int m,s,sum=9;
    cinms;
    string max=9,min=,out;
    if(m==1 && !s) out=0 0;
    else if(s9m  (!s&&m1)) out=-1 -1;
    else {
        while(sums) sum+=9,max+='9';
        char c=9-sum+s+48;
        max[max.length()-1]=c;
        while(max.length()m) max+='0';
        for(int i=max.length()-1;i=0;i--) min+=max[i];
        if(min[0]=='0') {
            min[0]='1';
            for(int i=1;imin.length();i++) {
                if(min[i]!='0') {
                    char c=min[i];
                    int x=c-48;
                    char d=x+47;
                    min[i]=d;
                    break;
                }
            }
        }
        out=min+ +max;
    }
    coutoutendl;
}