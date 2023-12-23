#include <iostream>
using namespace std;
int power(int n,int p){
    int power1=0;
    if(p==0){
        return 1;
    }
    else{
        power1=power(n,p-1);
        return n*power1;
    }
}
int main(){
int n,p;
cin>>n>>p;
cout<<power(n,p);
}