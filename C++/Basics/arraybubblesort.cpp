#include <iostream>
using namespace std;
int main(){
    int n,temp;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for( int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(array[j+1]<array[j])
            {
               temp=array[j+1];
               array[j+1]=array[j];
               array[j]=temp;

            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<array[i];
    }

}