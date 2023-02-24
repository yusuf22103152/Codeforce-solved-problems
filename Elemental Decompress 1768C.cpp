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
    while(t--) {
        cin>>n;
        int a[n],max=0;
        bool yes=true;
        map<int,pair<int,int>> m;
        vector<int> twice,missing;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]>max) max=a[i];
            m[a[i]].first++;
            if(m[a[i]].first>=3) yes=false;
            if(m[a[i]].first==2 && yes) twice.push_back(a[i]);
        }
        if(yes && max==n) {
            for(int i=n;i>0;i--) if(m[i].first==0) missing.push_back(i); 
            sort(twice.begin(),twice.end(),greater<int>());
            x=twice.size();
            for(int i=0;i<x;i++) {
                if(twice[i]<missing[i]) {
                    yes=false;
                    break;
                }
                m[twice[i]].second=missing[i];
            }
        }
        else yes=false;
        if(yes) {
            int b[n],c[n];
            for(int i=0;i<n;i++) {
                if(m[a[i]].first==1) b[i]=a[i],c[i]=a[i];
                else if(m[a[i]].first==2) {
                    m[a[i]].first=-2;
                    b[i]=a[i];
                    c[i]=m[a[i]].second;
                }
                else if(m[a[i]].first==-2){
                    b[i]=m[a[i]].second;
                    c[i]=a[i];
                }
            }
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++) cout<<b[i]<<" ";
            newl
            for(int i=0;i<n;i++) cout<<c[i]<<" ";
        }
        else cout<<"NO";
        newl
    }
}
