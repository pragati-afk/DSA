#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i%5==0||i%7==0){
            cout<<i<<" ";
        }
    }
}