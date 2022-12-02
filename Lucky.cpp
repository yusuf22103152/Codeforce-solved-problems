//https://codeforces.com/contest/1676/problem/A
#include <iostream>
#include<sstream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    while(n--) {
        string s;
        cin>>s;
        
        int sum1=0,sum2=0;
        
        
        for(int i=0;i<6;i++) {
            
            if(i<3) {
                char c=s[i];
                stringstream ss;
                ss<<c;
                int d;
                ss>>d;
                sum1+=d;
            }
            else {
                char c=s[i];
                stringstream ss;
                ss<<c;
                int d;
                ss>>d;
                sum2+=d;
            }
            
            
        }
        if(sum1==sum2) cout<<"yEs";
        else cout<<"nO";
        cout<<endl;
        
        
        
    }
    
}