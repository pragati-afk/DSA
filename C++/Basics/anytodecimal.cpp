#include <iostream>
using namespace std;
change(int n,int k){
    int a,digit,no;
    digit=0;
    while(a!=0){
   
    digit=digit+1;
    a=a/10;
    }
 int s;
    while(n!=0){
       s=n%10;
       for(int p=0;p<=digit;p++){
       no=s*(k*p);
       }
       n=n/10; 
    }
    return no;
}
int main(){
    int n,k;
cin>>n>>k;
if(k==2||k==8||k==16){
    int number;
    number=change(n,k);
    cout<<number;
}
else{
    cout<<"Give in limit";
}
}