#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for 
    (int i=0;i<n;i++){
            cin>>array[i];
    }
    int ans=2;
    int pd=array[0];
    int curr=2;
    for (int i=0;i<n;i++){
        if(((array[i]-array[i+1])==array[i+1]-array[i+2])&&(curr>=ans))

        {
            if (pd==array[i])
            {
                /* code */
            }
            
        ans=ans+1;
        curr=ans;
        pd=array[i]-array[i+1];
        }
    }
    cout<<ans;
}