//https://codeforces.com/contest/1512/problem/A
#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++) {
        int m1,m2,num;
        cin>>n;
        cin>>m1;
        int m1count=1,m2count=0,m2Index;
        bool m2found=false;
        for(int i=1;i<n;i++) {
            cin>>num;
            if(num==m1) m1count++;
            else {
                if(!m2found) {
                    m2=num;
                    m2Index=i+1;
                    m2found=true;
                }
                m2count++;
            }
        }
        if(m1count>m2count) cout<<m2Index;
        else cout<<1;
        cout<<endl;
        //cout<<"..."<<m1<<"....."<<m1count<<endl<<m2<<"..."<<m2count<<".....";
        
    }
    
    
    
}