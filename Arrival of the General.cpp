//https://codeforces.com/contest/144/problem/A
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
        b[i]=a[i];
    }
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(b[j]>b[i]) {
                int tem=b[i];
                b[i]=b[j];
                b[j]=tem;
            }
        }
    }
    int max=b[0],min=b[n-1],c=0,maxIndex,minIndex;
    //cout<<"Max : "<<max<<endl<<"Min : "<<min<<endl;
    for(int i=0;i<n;i++) {
        if(a[i]==max) {
            maxIndex=i;
            break;}
    }
    //cout<<"Max Index : "<<maxIndex<<endl<<"Min index : "<<minIndex<<endl;
    while(a[0]!=max) {
        int tem=a[maxIndex];
        a[maxIndex]=a[maxIndex-1];
        a[maxIndex-1]=tem;
        maxIndex--;
        c++;
        //cout<<"----"<<a[0]<<"-----"<<c<<endl;
    }
    for(int i=0;i<n;i++) {
        if(a[i]==min) minIndex=i;
    }
    while(a[n-1]!=min) {
        int tem=a[minIndex];
        a[minIndex]=a[minIndex+1];
        a[minIndex+1]=tem;
        minIndex++;
        c++;
        //cout<<"----"<<a[0]<<"-----"<<c<<endl;
    }
    //cout<<"..."<<c;
    
    
    /*
    for(int j=0;j<n;j++) {
        for(int i=0;i<n-1;i++) {
            if(a[j]>a[i]) {
                int tem=a[j];
                a[j]=a[i];
                a[i]=tem;
                c++;
                
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";}
        cout<<endl;
            }
        }
        if(a[0]==max && a[n-1]==min) break;
    }*/
    //cout<<".."<<max<<".."<<endl;
    //cout<<"Hello world"<<endl;
    cout<<c;
    
    
}