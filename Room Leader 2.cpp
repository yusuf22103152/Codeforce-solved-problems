//https://codeforces.com/contest/74/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,score=-2501,s,u,A,B,C,D,E;
    string handle,leader;
    cin>>n;
    do{
        cin>>handle>>s>>u>>A>>B>>C>>D>>E;
        if(s*100-u*50+A+B+C+D+E>score) score=s*100-u*50+A+B+C+D+E,leader=handle;
    }
    while(--n);
    cout<<leader<<endl;
}



