#include <iostream>
using namespace std;
  
int main(){
 int n;
 cin>>n;
 int arr[100][100];
 int num = 1;
 int x =0, y=0; 
   
 for(int i = 0; i<100; i++){
  for(int j = 0; j<100; j++){
   arr[i][j] = -1;
  }
 }
   
 arr[x][y] = num++;
   
 while(num<=n*n){
  if(x+1<n){
   x++;
  }
  else{
   y++;
  }
  arr[x][y] = num++;
    
  while(x>0 && y+1<n){
   arr[--x][++y] = num++;
  }
    
  if(y+1<n){
   y++;
  }
  else{
   x++;
  }
  arr[x][y] = num++;
    
  while(y>0 && x+1<n){   
   arr[++x][--y] = num++;
  }  
 }
   
 for(int i=0; i<n; i++){
  for(int j=0; j<n; j++){
   cout<<arr[i][j]<<" ";
  }
  cout<<endl;
 }
}