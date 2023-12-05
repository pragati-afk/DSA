#include <iostream>
using namespace std;
void Increment(int a){
    ++a;
    //local a ki change horri jhumare a ki nai change horri
}
int main(){
    int a=2;
    Increment(a);
    cout<<a;
} 