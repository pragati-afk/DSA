#include <iostream>
using namespace std;
int main (){
    
    int arr[]={10,20,30};
    cout<<*arr<<endl;
    int *ptr=arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;
    }


}
//isse ptr++ se 4 byte aage jaega bcoz int ka size 2 hota hai
// also can write cout<<*(ptr+i)<<endl;