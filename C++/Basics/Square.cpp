#include <iostream>
using namespace std;
int main(void)
{
    float square(float);
    float i,value,n;
    cout<<"enter value"<<endl;
    cin>>i;
    value=square(i);
    cout<<value<<endl;
}
float square(float n)
{
    float value;
    value=n*n;
    return(value);
    }
