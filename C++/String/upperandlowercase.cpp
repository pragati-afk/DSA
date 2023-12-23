#include <iostream>

#include<algorithm>
using namespace std;
int main(){
    string a;
    cin>>a;
//     for(int i=0;i<(a.size());i++){
//         if(a[i]<='z'&&a[i]>='a'){
//             a[i]=a[i]-32;
//         }
//     }
//     cout<<a;
//      for(int i=0;i<(a.size());i++){
//         if(a[i]<='Z'&&a[i]>='A'){
//             a[i]=a[i]+32;
//         }
//     }
transform(a.begin(),a.end(),a.begin(),::toupper);
transform(a.begin(),a.end(),a.begin(),::tolower);
    cout<<a;

}

