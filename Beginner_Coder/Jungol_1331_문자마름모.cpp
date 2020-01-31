#include <iostream>
using namespace std;

int main(){
 int N, n;
 cin>>N;
 n=N;
 int cnt = n;
 int rotation = 0;
 int arr[300][300];
 int x = -1, y=n;

 for(int i=0;i<300;i++){
  for(int j=0;j<300;j++){
   arr[i][j] = -1;
  }
 }

 while(1){

  for(int i=0; i<n; i++){
   x++;
   y--;
   arr[x][y] = rotation;
   rotation++;
  }
  cnt--;
  if(cnt == 0) break;

  n--;
  for(int i=0; i<n; i++){
   x++;
   y++;
   arr[x][y] = rotation;
   rotation++;
  }

  for(int i=0; i<n; i++){
   x--;
   y++;
   arr[x][y] = rotation;
   rotation++;
  }

  n--;
  for(int i=0; i<n; i++){
   x--;
   y--;
   arr[x][y] = rotation;
   rotation++;
  }
  n++;
  x--;
 }
 for(int i=0; i<2*N-1; i++){
  for(int j=0; j<2*N-1; j++){
   if(arr[i][j] !=-1){
    cout<<(char)(arr[i][j]%26+65)<<" ";
   }
   else{
    cout<<"  ";
   }
  }
  cout<<endl;
 }
}
