#include <iostream>
#include <algorithm>
using namespace std;
void pi(string A){

   if( int n=A.length()==0){
    return;
   }

    if((A[0]=='p')&&(A[1]=='i')){
         
       cout<<"3.14";
    
          pi(A.substr(2));
    }
    else{
        cout<<A[0];
        pi(A.substr(1));
    }
        
       
        
        
   
   

}
int main(){
    string n;
    cin>>n;
    pi(n);
    
}