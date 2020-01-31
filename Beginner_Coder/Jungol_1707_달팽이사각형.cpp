#include <iostream>
using namespace std;

int main(){
 int n;
 cin>>n;
 int x = 0, y = -1;
 int direction = 0;
 int tmp = n;
 int sq[100][100];
 int num = 1;
 int cnt = 0;
 for(int i=0; i<100; i++){
  for(int j=0; j<100; j++){
   sq[i][j] = -1;
  }
 }
 while(1){
  for(int i=0; i<tmp; i++){
   switch(direction){
    case 0:
     y++;
     break;
    case 1:
     x++;
     break;
    case 2:
     y--;
     break;
    case 3:
     x--;
     break;
   }
   sq[x][y] = num;
   num++;
  }
  direction = (direction+1)%4;
  if(cnt%2 == 0) tmp--;
  cnt++;
  if(tmp == 0) break;
 }
 for(int i=0; i<n; i++){
  for(int j=0; j<n; j++){
   if(sq[i][j] !=-1) cout<<sq[i][j]<<" ";
  }
  cout<<endl;
 }
}
