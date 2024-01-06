#include<iostream>
using namespace std;
void check(string A,char k){
        if(A.length()==0){
            return;
        }
        else{
            string ros=A.substr(1);
            if(k==ros[0]){
                check(ros.substr(1),k);
            }
        }
}
void del (string A){
    if (A.length()==0){
        return;
    }
    else{
        char key=A[0];
        string ros=A.substr(1);
        cout<<key;
        if(key==ros[0]){
            del(ros);
        }
       
    }    
}
int main(){
   string n;
   cin>>n;
   del(n);
}