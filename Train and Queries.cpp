//https://codeforces.com/contest/1702/problem/C
#include <bits/stdc++.h>
using namespace std;

class stationStats{
public:
    bool seen=false;
    int firstSeenPoint,lastSeenPoint;
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,x,k,a,b;
    cin>>t;
    while(t--) {
        cin>>n>>k;
        map<int,stationStats> m;
        for(int i=1;i<=n;i++) {
            cin>>x;
            if(!m[x].seen) m[x].firstSeenPoint=i,m[x].lastSeenPoint=i,m[x].seen=true;
            else m[x].lastSeenPoint=i;
        }
        while(k--) {
            cin>>a>>b;
            if(m[a].seen && m[b].seen && m[b].lastSeenPoint>m[a].firstSeenPoint) cout<<"yEs\n";
            else cout<<"nO\n";
        }
    }
}