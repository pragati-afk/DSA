#include<iostream>
using namespace std;
void TOH(int n,char src,char dest,char mid){
    if(n==0){
        return;
    }
    else{
    TOH(n-1,src,mid,dest);
    cout<<src << mid <<endl;
    TOH(n-1,mid,dest,src);
    
    }

}
int main(){
    int n;
    cin>>n;
    char A,B,C;
    TOH(n,'A','B','C');
}