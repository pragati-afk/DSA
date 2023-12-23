#include<iostream>
using namespace std;
int divisible(int n,int b,int c){
    int c1,c2,c3;
    c1=n/b;
    c2=n/c;
    c3=n/(b*c);
    return c1+c2-c3;
}
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    cout<<divisible(n,a,b);

}