#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str="i am";
    string str1(5,'n');;
    cout<<str<<str1<<endl;
    // str1.clear();
    getline(cin,str);
   
    sort(str.begin(),str.end());
    cout<<str;
}