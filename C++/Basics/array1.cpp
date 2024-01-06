#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int max=array[0],min=array[0];
    for(int i=0;i<(n-1);i++){
        if (array[i+1]>array[i])
        {
            max=array[i+1];
        }
        if(array[i+1]<array[i]){
            min=array[i+1];
        }
    }
for(int i=0;i<n;i++){
    cout<<array[i];
}
cout<<endl;
cout<<max<<endl<<min<<endl;
}