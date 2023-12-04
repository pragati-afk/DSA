#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for (int i=0;i<n;i++){
     cin>>array[i];
    }
    int key;
    cin>>key;
    int flag=0;
    for (int i=0;i<n;i++){
        if(array[i]==key){
            cout<<i<<endl;
            break;
            flag=flag+1;

        }
       
    }
     if(flag==0){
            cout<<-1;
        }
        
}