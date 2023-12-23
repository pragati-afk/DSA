#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    int array[26];
    for(int i=0;i<26;i++){
        array[i]=0;
    }
    string str;
    cin>>str;
    int no;

    for(int i=0;i<str.size();i++){
       no= int(str[i])-96;
       array[no]++;
      

    }
    int k;
    int max=array[0];
    for(int i=1;i<26;i++){
         if(max<array[i]){
            max=array[i];
            k=i;
         }
        

    }
    k=k+96;
    
    cout<<max<<char(k);
}