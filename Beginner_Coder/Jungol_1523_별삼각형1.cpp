#include <iostream>
using namespace std;

void star1(int n){
 for(int i = 0; i<n; i++){
  for(int j = 0; j<=i; j++){
   cout<<"*";
  }
  cout<<endl;
 }
}

void star2(int n){
 for(int i = 0; i<n; i++){
  for(int j = n-i; j>0; j--){
   cout<<"*";
  }
  cout<<endl;
 }
}

void star3(int n){
 for(int i = 0; i<n; i++){
  for(int j = 0; j<n-1-i; j++){
   cout<<" ";
  }
  for(int j = n/2-i; j<=n/2+i; j++){
   cout<<"*";
  }
  cout<<endl;
 }
}

int main(){
 int n;
 int m;
 cin>>n>>m;
 if(0<n && n<100 && 0<m && m<4){
  switch(m){
   case 1:
    star1(n);
    break;
   case 2:
    star2(n);
    break;
   case 3:
    star3(n);
    break;
  }
 }
 else{
  cout<<"INPUT ERROR!";
 }
}
