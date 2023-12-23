#include<iostream>
using namespace std;
int min(int a,int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    int k=min(a,b);
    k=a-b;
int h;
    while(k!=0){
        h=k;
        k=min(a,b)-k;
       
        a=min(a,b);
        b=k;
        
    }
    cout<<h;

}