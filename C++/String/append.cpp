#include <iostream>
using namespace std;
int main(){
    string s1="fam";
    string s2="ily";
    s1.append(s2);
    cout<<s1;
    s1="fam";
    cout<<s1+s2<<s1[1];
}