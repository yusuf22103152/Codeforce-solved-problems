//https://codeforces.com/contest/339/problem/A
#include <iostream>
using namespace std;

int main() {
    
    string s;
    cin>>s;
    int len=s.length();
    int k=0;
    char nums[len];
    for(int i=0;i<len;i++) {
        char c=s[i];
        if(s[i]!='+') {
            nums[k]=c;
            k++;
        }
    }
    int numsLim[k]; 
    for(int i=0;i<k;i++) {
        numsLim[i]=nums[i]-'0';
    }
    
    for (int c=0;c<k;c++) {
    for (int i=0;i<k-1;i++) {
        if(numsLim[i]>numsLim[i+1]) {
            int t=numsLim[i+1];
            numsLim[i+1]=numsLim[i];
            numsLim[i]=t;
        }
    }
    }
    for(int i=0;i<k;i++) {
        cout<<numsLim[i];
        if(i<k-1) {
            cout<<'+';
        }
    }
}









