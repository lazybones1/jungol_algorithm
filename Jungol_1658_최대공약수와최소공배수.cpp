#include <iostream>
using namespace std;

int main(){
 int n1, n2;
 cin>>n1>>n2;
 int gDivisor=0;
 int lMultiple=0;

 for(int i=1; i<=n1; i++){
  if(n1%i == 0 && n2%i == 0){
   gDivisor = i;
  }
 }
 lMultiple = (n1*n2)/gDivisor;

 cout<<gDivisor<<"\n"<<lMultiple;
}
