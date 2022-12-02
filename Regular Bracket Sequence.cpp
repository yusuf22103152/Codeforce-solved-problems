//https://codeforces.com/contest/26/problem/B
#include <iostream>
using namespace std;

int main() {
    
    string s;
    cin>>s;
    int c=0,d=0;
    for(auto br:s) if(br=='(') c++; else if(c>0) c--,d++;
    cout<<d*2<<endl;

}