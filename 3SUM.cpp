//https://codeforces.com/problemset/problem/1692/F
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,x,l;
    string output;
    cin>>t;
    while(t--) {
        cin>>n;
        map<int,int> m;
        vector<int> v;
        while(n--) {
            cin>>x;
            if(m[x%10]<3) v.push_back(x%10);
            m[x%10]++;
        }
        l=v.size(),output="nO";
        for(int a=0;a<l;a++) {
            for(int b=0;b<l;b++) {
                for(int c=0;c<l;c++) {
                    if(a==b || b==c || c==a) continue;
                    if((v[a]+v[b]+v[c])%10==3) output="yEs";
                }
            }
        }
        cout<<output<<endl;
    }
}
