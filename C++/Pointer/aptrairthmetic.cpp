#include <iostream>
using namespace std;
int main(){
    int aptr,a=10;
    *aptr=&a;
    *aptr++;
    cout<<*aptr;
}
