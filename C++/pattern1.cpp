#include<iostream>
using namespace std;
int main(){
    int i,n,j;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=1;j<=n-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    }