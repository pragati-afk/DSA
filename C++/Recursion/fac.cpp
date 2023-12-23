#include<iostream>
using namespace std;
int fac(int n){
    if(n==0){
        return 1;
    }
    else{
        int fact=fac(n-1);
        return n*fact;
    }
}
int main(){
int n;
cin>>n;
cout<<fac(n);
}