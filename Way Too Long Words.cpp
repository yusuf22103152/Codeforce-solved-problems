//https://codeforces.com/contest/71/problem/A
#include<bits/stdc++.h>
#include<sstream>
using namespace std;

int main() {

    int n;

    cin>>n;

    string arr[n];
    string word;

    for (int i=0;i<n;i++)  {
        cin>>word;
        int len=word.length();
        if (len>10) {
            char fchar=word[0];
            char lchar=word[len-1];
            stringstream ss;
            ss<<len-2;
            string s;
            ss>>s;
            string abbr=fchar+s+lchar;
            arr[i]=abbr;
        }
        else {
            arr[i]=word;
        }

    }
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<endl;
    }





}
