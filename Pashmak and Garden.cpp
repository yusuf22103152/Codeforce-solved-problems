//https://codeforces.com/problemset/problem/459/A
#include <bits/stdc++.h>
using namespace std;
void detPos4inline(int a1,int b1,int a2,int b2,int *a3,int *b3,int *a4,int *b4) {
    int distance=abs(b1-b2);
    *a3=a1+distance;
    *b3=b1;
    *a4=a2+distance;
    *b4=b2;
}
void detPos4Cross(int a1,int b1,int a2,int b2,int *a3,int *b3,int *a4,int *b4) {
    *a3=a1;
    *b3=b2;
    *a4=a2;
    *b4=b1;
}
int main() {
    bool haveAns=true;
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2) detPos4inline(x1,y1,x2,y2,&x3,&y3,&x4,&y4);
    else if(y1==y2) detPos4inline(y1,x1,y2,x2,&y3,&x3,&y4,&x4);
    else if(abs(x1-x2)==abs(y1-y2)) detPos4Cross(x1,y1,x2,y2,&x3,&y3,&x4,&y4);
    else haveAns=false;
    haveAns?cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl:cout<<-1<<endl;
}