#include <iostream>
#include<cmath>
using namespace std;
max(int a, int b, int c){
    if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(c>b){
            return c;
        }
        else{
            return b;
        }
    }
}
int main(){
int a,b,c,k;
cin>>a>>b>>c;
k=max(a,b,c);
if(k==a){
    if((pow(k,2))==((pow(b,2)+pow(c,2)))){
        cout<<"pythogorean triplet";
    }
    else{
        cout<<"not a pythogorean triplet";
    }
}
else{
    if(k==b){
         if((pow(k,2))==((pow(a,2)+pow(c,2)))){
                cout<<"pythogorean triplet";
    }
    else{
        cout<<"not a pythogorean triplet";
    }

    }
    else{
        if((pow(k,2))==((pow(a,2)+pow(b,2)))){
                cout<<"pythogorean triplet";
    }
    else{
        cout<<"not a pythogorean triplet";
    }
    }
}
}