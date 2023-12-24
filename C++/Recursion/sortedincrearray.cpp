//sorted increasing array
//2354668
#include <iostream>
using namespace std;
 bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    else{
 bool Restarray=sorted(arr+1,n-1);
 
     return (arr[0]<arr[1] && Restarray);

 }
 
   
}
int main(){
    int n;
   
    cin>>n;
     int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<sorted(A,n);

}