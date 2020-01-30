#include <iostream>
using namespace std;

int find_divisor(int a, int b){
 int gDivisor=0;
 for(int i=1; i<=a; i++){
  if(a%i == 0 && b%i == 0){
   gDivisor = i;
  }
 }
 return gDivisor;
}

int main(){
 int n;
 cin>>n;
 int arr[10];

 for(int i=0; i<n; i++){
  cin>>arr[i];
 }
 int gDivisor=arr[0];
 int lMultiple = arr[0];
 for(int i=1; i<n; i++){
  gDivisor = find_divisor(gDivisor, arr[i]);
  lMultiple = (lMultiple *arr[i])/ find_divisor(lMultiple, arr[i]);
 }
 cout<<gDivisor<<"\n"<<lMultiple;
}
