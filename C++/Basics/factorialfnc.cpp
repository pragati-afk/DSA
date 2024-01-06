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
    int n,ans;
    cin>>n;
    if (n==0){
        cout<<1;
    }
    else{
    ans=fact(n);
    cout<<ans;
    return 0;
}
}