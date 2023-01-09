//https://codeforces.com/contest/74/problem/A
#include <bits/stdc++.h>
using namespace std;

class participant{
public:
    string handle;
    int successful_hacks,unsuccessful_hacks,A,B,C,D,E;
    int score;
    void getData() {
        cin>>handle>>successful_hacks>>unsuccessful_hacks>>A>>B>>C>>D>>E;
    }
    void calculate() {
        score=successful_hacks*100-unsuccessful_hacks*50+A+B+C+D+E;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    participant participants[n];
    for(int i=0;i<n;i++) participants[i].getData(),participants[i].calculate();
    int leader_score=participants[0].score;
    string leader=participants[0].handle;
    for(int i=0;i<n;i++) if(participants[i].score>leader_score) leader_score=participants[i].score,leader=participants[i].handle;
    cout<<leader<<endl;
}

