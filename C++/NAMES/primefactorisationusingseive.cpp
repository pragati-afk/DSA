#include<iostream>

using namespace std;
int prime(n){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n+2;i++){
        array[i]=i;
    }
    int multiple=0;
    for(int i=2;i<n;i++){
        for(int j=i*i;j<n;j=j+i){
            
            array[j]=0;
        }
    }
    
    for(int i=0;i<n;i++){
        if (array[i]!=0)
        {
           p++;
        }
     
    }
    int arr[p];
    for(int i=0;)
}