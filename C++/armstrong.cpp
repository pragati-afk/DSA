#include <iostream>
#include<cmath>
using namespace std;
int main(){
  int j,k,l,no,n,a;
  cin>>n;
  a=n;
  k=n;
  j=0;
  while(a!=0){
   j=j+1;
   a=a/10;
  }
  
  no=0;
  while(k!=0){
    l=k%10;
    no=(no)+(pow(l,j));
    k=k/10;
  }
  cout<<no;
  if(n==no){
    cout<<"armstrong";

  }
  else{
    cout<<"not a armstrong";
  }
}
//chod