#include <iostream>
using namespace std;
 
int main(){
 int n, m;
 cin>>n;
 int arr[40];
 int divisor = 0;
 int multiple = 0;
  
 for(int i=0; i<40; i++){
  arr[i] = -1;
 }
  
 for(int i=0; i<n; i++){
  cin>>arr[i];
 }
 cin>>m;
  
 for(int i=0; i<n; i++){
  if(arr[i] <= m && m%arr[i]==0) divisor+=arr[i];
  if(arr[i] >= m && arr[i]%m==0) multiple+=arr[i]; 
 }
 cout<<divisor<<"\n"<<multiple<<endl;
}