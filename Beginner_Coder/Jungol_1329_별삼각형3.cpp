#include <iostream>
using namespace std;

void star(int n){
 int tmp = 1;
 for(int i=0; i<n; i++){
  if(i<=n/2){
   for(int j = i ; j > 0 ; j--){
    cout<<" ";
   }
   for(int j = 1+(2*i); j>0 ; j--){
    cout<<"*";
   }
  }
  else{
   for(int j = n/2-tmp; j>0; j--){
    cout<<" ";
   }
   for(int j = 2*(n/2-tmp)+1; j>0 ; j-- ){
    cout<<"*";
   }
   tmp++;
  }
  cout<<endl;
 }
}

int main(){
 int n;
 cin>>n;
 if(0<n && n<101 && n%2==1){
  star(n);
 }
 else{
  cout<<"INPUT ERROR!"<<endl;
 }
}
