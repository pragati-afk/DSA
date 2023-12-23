#include <iostream>
using namespace std;
int sum(int n){
    int prevsum=0;
    if (n==0){
        return 0;
    }
    else{
    int prevsum=sum(n-1);
    return prevsum+n;
}

}
int main(
   
){
     int n;
    cin>>n;
cout<<sum(n);
}