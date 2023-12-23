#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1){
        return 0;
    }
    else if(n==0){
        return 1;
    }
    else{
        int c=fibo(n-1)+fibo(n-2);
        return c;
    }
}
int main(){
    int n;
    cin>>n;
cout<<fibo(n);
}