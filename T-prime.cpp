//https://codeforces.com/contest/230/problem/B
#include <bits/stdc++.h>
using namespace std;
bool strongRoot(long long int n,long long int *aRoot) {
     long double d=sqrt(n);
     long long int x=ceil(d);
     if(d==x) {
     *aRoot=x;
     return true;
     }
     return false;
}
bool isPrime(long long int n) {
     if(n<2 || n%2==0 && n!=2) return false;
     long long int s=floor(sqrt(n));
     for(long long int i=3;i<=s;i+=2) if(n%i==0) return false;
     return true;
}
int main() {
     ios::sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0);
     long long int n,x,root;
     cin>>n;
     while(n--) {
          cin>>x;
          if((strongRoot(x,&root) && isPrime(root))) cout<<"YES";
          else cout<<"NO";
          cout<<endl;
     }
     cout<<endl;
}