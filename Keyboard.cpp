//https://codeforces.com/contest/474/problem/A
#include<iostream>
using namespace std;
int main() {

    char dir;
    cin>>dir;

    string kBoard="qwertyuiopasdfghjkl;zxcvbnm,./",word;
    cin>>word;
    int kLen=kBoard.length(),wLen=word.length();
    for(int i=0;i<wLen;i++) {
        for(int j=0;j<kLen;j++) {
            if(word[i]==kBoard[j]) {
                if(dir=='R') word[i]=kBoard[j-1];
                else word[i]=kBoard[j+1];
                break;
            }
        }
    }
    cout<<word;


}
