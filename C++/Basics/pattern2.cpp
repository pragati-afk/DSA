#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        if (i%2==0){
            for(int j=1;j<=i;j++){
                if(j%2==0){
                    cout<<1;
                }
                if(j%2!=0){
                    cout<<0;
                }
                
            }
        }
        else{
            for(int j=1;j<=i;j++){
                if(j%2==0){
                    cout<<1;
                }
                if(j%2!=0){
                    cout<<0;
                }
                
            }
        }
        cout<<endl;

    }


}