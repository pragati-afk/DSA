#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0 ;i<n;i++){
        cin>>array[i];
    }
    const int N= 1e6+2;
    int Idx[N];
   for(int i=0;i<N;i++){
    Idx[i]=-1;
   }
   int k=0,repeat1=-1,repeat2=-1,minrepeat=-1;
   for(int i=0;i<n;i++)
   {
    if(Idx[k]!=-1){
      repeat1=Idx[k];
      if(repeat1>repeat2){
        minrepeat=repeat1;
      }
      else{
        minrepeat=repeat2;
      }
      repeat2=repeat1;
    }
     k=array[i];
     Idx[k]=i;
     
   }
   cout<<minrepeat;

    }
