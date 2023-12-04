#include<iostream>
using namespace std;
int BS(int key,int array[],int n){
    int mid;
    int k=0;
    int p=n;
     
    while(k!=p){
        mid=(k+p)/2;
   
    if(array[mid]==key){
        return mid;  }
    else{ if(key>array[mid]){
        k=mid+1;  
    }
    else{
        p=mid-1;   
    }
    }}
    return -1;}

int main()
{
int n;
cin>>n;
int array[n];
int key;
cin>>key;
for(int i=0;i<n;i++){
    cin>>array[i];
}
cout<<BS(key,array,n);

}