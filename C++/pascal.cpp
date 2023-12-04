#include <iostream>
using namespace std;
int fact(int n){
    int i;
    int fac=1;
    for(i=n;i>0;i--){
    fac=fac*i;
    }
return fac;
}
int nCr(int n,int r){
    int nCr,k;
    k=n-r;
    nCr=fact(n)/(fact(k)*fact(r));
}
int main(){
    int n,u;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<(i+1);j++){
            u=nCr(i,j);
            cout<<u<<" ";
        }
        cout<<endl;
    }
}