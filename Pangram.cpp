//https://codeforces.com/contest/520/problem/A
    #include <iostream>
    using namespace std;
     
    int main() {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int count=0;
        for(int i=97;i<=122;i++) {
            bool f=true;
            for(int j=0;j<n;j++) {
                int c=tolower(s[j]);
                if(i==c) {
                    if(f) {
                    count++;
                        
                    }
                    s[j]=' ';
                    f=false;
                }
            }
        }
        if(count<26) cout<<"NO";
        else cout<<"YES";
    }