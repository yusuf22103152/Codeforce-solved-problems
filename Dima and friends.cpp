//https://codeforces.com/contest/272/problem/A
#include <iostream>
using namespace std;
int frn,finSum=0;
bool DimaIsSafe(int hisFingers) {
    if((finSum+hisFingers)%frn!=1) return true;
    return false;
}

int main() {
    cin>>frn;
    int tem=frn;
    frn++;
    while(tem--) {
        int fins;
        cin>>fins;
        finSum+=fins;
    }
    bool f1=DimaIsSafe(1),f2=DimaIsSafe(2),f3=DimaIsSafe(3),f4=DimaIsSafe(4),f5=DimaIsSafe(5);
    int safeFingers=f1+f2+f3+f4+f5;
    cout<<safeFingers;
    
    
}