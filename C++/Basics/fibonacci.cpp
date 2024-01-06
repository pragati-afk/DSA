#include <iostream>
using namespace std;
int fibo(int n){
    int a=0;
    int b=1;
   cout<<a<<" "<<b<<" ";
   int c;
   for(int i=3;i<n;i++){
   
   c=a+b;
    a=b;
   b=c;
   cout<<c<<" ";
   }
}
int main(){
    int a,b,n;
    a=0;
    b=1;
    cin>>n;
    if(n==1){
        cout<<a;
    }
    else{
        if(n==2){
         cout<<a<<b;
        }
        else { 
            cout<<fibo(n);
        }
    }
}