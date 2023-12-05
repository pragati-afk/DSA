#include <iostream>
using namespace std;
int main(){
    int a=10;
    int *p;
    p=&a;
    int **q=&p;
    cout<<*q<<endl;;
    cout<<**q;
}