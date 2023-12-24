#include<iostream>
using namespace std;
int firstoccurence(int array[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    else{
    if(array[i]==key){
        return i;
    }  
    else{
        return firstoccurence(array,n,i+1,key);
    }       
}
}
int lastoccurence(int array[],int n,int i, int key){
     if(i==0){
        return -1;
     }
     else{
        if(array[i]==key){
            return i;
        }
        else{
            return lastoccurence(array,n,i-1,key);
        }
     }
}
int main(){
    int n,key;
    cin>>n>>key;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
   
    cout<<firstoccurence(A,n,0,key)<<" ";
    cout<<lastoccurence(A,n,n,key);


}