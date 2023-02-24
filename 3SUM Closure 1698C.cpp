#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        int a[n],c=0,z=0;
        long long int x;
        bool b1=false,b2;
        vector<int> v;
        set<int> st;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]) c++,v.push_back(a[i]);
            else z++;
            st.insert(a[i]);
        }
        if(c<5) {
            b2=true;
            if(z>3) z=3;
            while(z--) v.push_back(0);
            n=v.size();
            for(int i=0;i<n;i++) {
                for(int j=i+1;j<n;j++) {
                    for(int k=j+1;k<n;k++) {
                        x=v[i]+v[j]+v[k];
                        if(st.find(x)==st.end()) {
                            b2=false;
                            break;
                        }
                    }
                    if(!b2) break;
                }
                if(!b2) break;
            }
            b1=b2;
        }
        b1?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
}
