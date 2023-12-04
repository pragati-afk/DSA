#include <iostream>
using namespace std;
int max(int array[], int i){
     int maxi=array[0];
    
       for(int j=0;j<i;j++){
        if(array[j]>maxi){
            maxi=array[j];
        }
        
       }
       return maxi;
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[n];
    }
    int k;
    int record=0;
    for(int i=0;i<n;i++){
       int k=max(array[i],i);
       if((array[i+1]==k)&&(array[i]>array[i+1])){
        record=record+1;
       }  
    }
    cout<<record;
}