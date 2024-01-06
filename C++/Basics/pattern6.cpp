#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    for( i=0;i<n/2;i++){
        
        for(int j=0;j<n-i;j++){
            cout<<"  ";
        }
       for(int j=0;j<(2*i+1);j++){
        cout<<"*"<<" ";
       }
       cout<<endl;}

if(n%2==0){
    for(int j=0;j<n;j++){
        cout<<" *";
    }
}
}  
     