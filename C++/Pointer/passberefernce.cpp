#include <iostream>
using namespace std;
void swap(int *a, int *b){
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}
int main(){
    int a=2;
    int b=4;
    swap(&a,&b);
    cout<<a<<b;

}