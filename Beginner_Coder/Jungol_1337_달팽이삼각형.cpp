#include <iostream>
using namespace std;

int main(){
 int N;
 cin>>N;
 int n = N;
 int arr[100][100];
 int num = 0;
 int x=-1, y=-1;
 int flag = 0;
 for(int i=0;i < n;i++){
  for(int j=0;j < n;j++){
   arr[i][j] = -1;
  }
 }

 while(1){
  for(int i=0;i < n;i++){
   switch(flag){
    case 0:
     x++;
     y++;
     break;
    case 1:
     y--;
     break;
    case 2:
     x--;
     break;
    }
    arr[x][y] = num;
    num = (num+1)%10;
   }
   flag = (flag+1)%3;
   n--;
   if(n == 0 )break;
 }
 for(int i=0;i < N;i++){
  for(int j=0;j < N;j++){
   if(arr[i][j]!=-1) cout<<arr[i][j]<<" ";
  }
   cout<<endl;
 }
}
