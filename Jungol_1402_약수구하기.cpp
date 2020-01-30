#include <iostream>
using namespace std;

int main(){
 int n, k;
 cin>>n>>k;
 int cnt=0;
 int divisor=1;
 while(1){
  if(divisor>n) {
   cout<<"0"<<endl;
   break;
  }
  if(n%divisor == 0)cnt++;
  if(cnt == k){
   cout<<divisor<<endl;
   break;
  }
  divisor++;
 }
}
