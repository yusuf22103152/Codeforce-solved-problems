//https://codeforces.com/contest/459/problem/B
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int n,x,max,min;
    cin>>n;
    map<int,int> m;
    bool firstTouch=true;
    while(n--) {
        cin>>x;
        if(firstTouch) max=x,min=x,firstTouch=false;
        else if(x>max) max=x;
        else if(x<min) min=x;
        m[x]++;
    }
    long long int dif=max-min,maxC,minC;
    bool check1=false,check2=false;
    for(auto i:m) {
        if(i.first==max) maxC=i.second,check1=true;
        else if(i.first==min) minC=i.second,check2=true;
        if(check1 && check2) break;
    }
    long long int out;
    if(dif==0) out=(maxC-1)*maxC/2;
    else out=maxC*minC;
    cout<<dif<<" "<<out<<endl;
}