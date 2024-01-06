#include<iostream>
using namespace std;
int main(){
    int a,flag;
    flag=0;
    cin>>a;
    for(int i=2;i<a;i++){
        if (a%i==0){
            flag=flag+1;
        }

    }
    if (flag==0){
        cout<<"prime";
    }
    else{
        cout<<"not prime";    }

}