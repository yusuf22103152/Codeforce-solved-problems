#include <bits/stdc++.h>
using namespace std;
#define Array(a,n,b) if(b==0) for(int i=0;i<n;i++) cin>>a[i];else if(b==1) sort(a,a+n);else if(b==2) sort(a,a+n,greater<int>());
#define Setup ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);int t,n,q,x,y,z;string s;long long int sum=0,X,Y,Z;
#define answer(x) x?cout<<"YES"<<endl:cout<<"NO"<<endl;
#define newl cout<<endl;
/*
bool isInt(long double n) {
    long long int x=n;
    return x==n;
}
bool isPrime(long long int n) {
    if(n==2) return true;
    if(n%2==0) return false;
    long long int limit=sqrt(n)+1;
    for(long long int i=3;i<=limit;i+=2) if(n%i==0) return false;
    return true;
}
string i2s(long long int n) {
    stringstream ss;
    string s;
    ss<<n;
    ss>>s;
    return s;
}
char i2c(int n) {
    char c=n+48;
    return c;
}
int c2i(char c) {
    int n=c-48;
    return n;
}
int charSeq(char c) {
    int n=c;
    if(n>=65 && n<=90) return n-64;
    if(n>=97 && n<=122) return n-96;
    return 0;
}
int intLen(long long int n) {
    stringstream ss;
    string s;
    ss<<n;
    ss>>s;
    return s.size();
}
long long int s2i(string s) {
    stringstream ss;
    long long int n;
    ss<<s;
    ss>>n;
    return n;
}
int digitSum(long long int n) {
    stringstream ss;
    string s;
    ss<<n;
    ss>>s;
    int sum=0;
    for(int i=0;i<s.size();i++) sum+=c2i(s[i]); 
    return sum;
}
*/
int main() {
    Setup
    cin>>t;
    int c=0;
    for(int T=1;T<=t;T++) {
        cin>>n;
        string sa[n];
        set<string> st;
        for(int i=0;i<n;i++) cin>>sa[i],st.insert(sa[i]);
        for(int i=0;i<n;i++) {
            s=sa[i],x=s.size();
            for(int i=1;i<x;i++) {
               if(st.find(s.substr(0,i))!=st.end() && st.find(s.substr(i,x-i))!=st.end()) {
                   x=-1;
                   break;
               } 
            }
            x<0?cout<<1:cout<<0;
        }
        newl
    }
}
