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
int main(){
    int n,r;
    cin>>n>>r;
    int nCr,k;
    k=n-r;
    nCr=fact(n)/(fact(k)*fact(r));
    cout<<nCr;
    return 0;
}