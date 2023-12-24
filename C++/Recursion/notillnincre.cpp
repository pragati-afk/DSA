#include<iostream>
using namespace std;
int increasing(int n){
   
    if(n==0){
        return n ;
        
    }
    else{
        
        int prev=increasing(n-1);
        cout<<n;
        return prev;
    }
}
int decreasing(int n){
    if(n==0){
        return n;
        
    }
    else{
        cout<<n;
        int prev=decreasing(n-1);
        
        return prev;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<increasing(n)<<endl;
    cout<<decreasing(n);
}
//increasing