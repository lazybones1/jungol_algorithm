#include <iostream>
using namespace std;

void pascal1(int n){
 int pascal[30][30];
 for(int i=0;i<30;i++){
  for(int j=0; j<30; j++){
   pascal[i][j] = -1;
  }
 }
 for(int i=0;i<n;i++){
  for(int j=0; j<=i; j++){
   if(j==0 || j==i){
    pascal[i][j] = 1;
   }
   else{
    pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
   }
  }
 }
 for(int i=0; i<n; i++){
  for(int j=0; j<n; j++){
   if(pascal[i][j] != -1) cout<<pascal[i][j]<<" ";
  }
  cout<<endl;
 }
}

void pascal2(int n){
 int pascal[30][30];
 for(int i=0;i<30;i++){
  for(int j=0; j<30; j++){
   pascal[i][j] = -1;
  }
 }
 for(int i=n-1; i>=0; i--){
  for(int j =0; j<n; j++){
   if(j<i){
    pascal[i][j] = 0;
   }
   else{
    if(i==j || j==n-1){
     pascal[i][j] = 1;
    }
    else{
     pascal[i][j] = pascal[i+1][j] + pascal[i+1][j+1];
    }
   }
  }
 }
 for(int i=0; i<n; i++){
  for(int j=0; j<n; j++){
   if(pascal[i][j] == 0){
    cout<<" ";
   }
   else if(pascal[i][j] != -1){
    cout<<pascal[i][j]<<" ";
   }
  }
  cout<<endl;
 }
}

void pascal3(int n){
 int pascal[30][30];
 for(int i=0;i<30;i++){
  for(int j=0; j<30; j++){
   pascal[i][j] = -1;
  }
 }
 for(int j=n-1;j>=0;j--){
  for(int i=n-1; i>=j; i--){
   if(i == n-1 || i==j){
    pascal[i][j] = 1;
   }
   else{
    pascal[i][j] = pascal[i][j+1] + pascal[i+1][j+1];
   }
  }
 }
 for(int i=0; i<n; i++){
  for(int j=0; j<n; j++){
   if(pascal[i][j] != -1) cout<<pascal[i][j]<<" ";
  }
  cout<<endl;
 }
}
int main(){
 int n, m;
 cin>>n>>m;
 switch(m){
  case 1:
   pascal1(n);
   break;
  case 2:
   pascal2(n);
   break;
  case 3:
   pascal3(n);
   break;
 }
}
