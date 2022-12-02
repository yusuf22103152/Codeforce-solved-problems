//https://codeforces.com/contest/282/problem/A
#include <iostream>
using namespace std;

int main() {
    
    int n;
    int x=0;
    cin>>n;
    for (int i=0;i<n;i++) {
        string s;
        cin>>s;
        if(s=="X++" || s=="++X") {
            x++;
        }
        else if(s=="X--" || s=="--X") {
            x--;
        }
    }
    cout<<x;
    
    
}