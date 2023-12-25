//12345---54321
#include <iostream>
#include <algorithm>
using namespace std;
void reverse(string A){
    int n=A.length();
    if(n==0){
        return ;
    }
    
        string ros=A.substr(1);
        reverse(ros);
        cout<<A[0];
   
}
int main(){
    string n;
    cin>>n;
  reverse(n);
    
}