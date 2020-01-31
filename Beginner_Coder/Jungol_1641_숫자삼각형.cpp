#include <iostream>
using namespace std;

void numT1(int n){
 int a = 1;
 int num[100][100];
 for(int i=0; i<n; i++){
  for(int j=0; j<n; j++){
   num[i][j] = -1;
  }
 }
 for(int i=0; i<n; i++){
  if(i%2 == 0){
   for(int j = 0; j<=i; j++){
    num[i][j] = a;
    a++;
   }
  }
  else{
   for(int j = i; j>=0; j--){
    num[i][j] = a;
    a++;
   }
  }
 }
 for(int i=0; i<n; i++){
  for(int j=0; j<n; j++){
   if(num[i][j] != -1){
    cout<<num[i][j]<<" ";
   }
  }
  cout<<endl;
 }
}

void numT2(int n){
 for(int i=0; i<n; i++){
  for(int j =0 ; j<i ; j++){
   cout<<"  ";
  }
  for(int j = 0; j<(2*n)-(2*i)-1; j++){
   cout<<i<<" ";
  }
  cout<<endl;
 }
}

void numT3(int n){
 int tmp = 0;
 for(int i=0; i<n; i++){
  if(i<=n/2){
   for(int j=1; j<=i+1; j++){
    cout<<j<<" ";
   }
  }
  else{
   for(int j=1; j<=n/2-tmp; j++){
    cout<<j<<" ";
   }
   tmp++;
  }
  cout<<endl;
 }
}

int main(){
 int n, m;
 cin>>n>>m;
 if(0<n && n<100 && n%2==1 && 0<m && m<4){
  switch(m){
   case 1:
    numT1(n);
    break;
   case 2:
    numT2(n);
    break;
   case 3:
    numT3(n);
    break;
  }
 }
 else{
  cout<<"INPUT ERROR!";
 }
}
