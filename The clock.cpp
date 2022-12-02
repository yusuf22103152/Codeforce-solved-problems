//https://codeforces.com/contest/1692/problem/D
#include <bits/stdc++.h>
using namespace std;
 
int hours,mins,x,t,c;
string s,sTem,h,m;
void extract() {
    stringstream ssh,ssm;
    ssh<<s.substr(0,2),ssh>>hours,ssm<<s.substr(3,2),ssm>>mins;
}
void refresh(int m) {
    hours+=m/60,mins+=m%60,hours+=mins/60,hours%=24,mins%=60;
}
void compress() {
    stringstream ssh,ssm;
    deque<char> dh,dm;
    ssh<<hours,ssh>>h,ssm<<mins,ssm>>m;
    for(auto y:h) dh.push_back(y);
    for(auto y:m) dm.push_back(y);
    if(h.size()==1) dh.push_front('0');
    if(m.size()==1) dm.push_front('0');
    string u{dh.begin(),dh.end()};
    string v{dm.begin(),dm.end()};
    s=u+":"+v;
}
bool palindrome() {
    if(s[0]==s[4] && s[1]==s[3]) return true;
    return false;
}
int main() {
    cin>>t;
    while(t--) {
        cin>>s>>x,c=0,sTem=s;
        do extract(),refresh(x),compress(),c+=palindrome();
        while(s!=sTem);
        cout<<c<<endl;
    }
}