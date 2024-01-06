//subarray is continous part of an array
/**subsequence is a sequence that can be derived by an array be 
selecting 0 or more elements without changing the order of elements**/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for (int i=0;i<n;i++){
        cin>>array[i];
    }
    int subarray=array[0];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            subarray=array[j];
            sum=sum+subarray;
            cout<<sum<<" ";
        }
        sum=0;
        
    }
}
