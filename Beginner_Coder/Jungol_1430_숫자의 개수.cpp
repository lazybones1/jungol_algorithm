#include <iostream>
using namespace std;

int main(){
 int A, B, C;
 cin>>A>>B>>C;
 int mul = A*B*C; 
 int answer[10];
 
 for(int i=0; i<10; i++){
  answer[i] = 0;
 }
 
 while(1){
  answer[mul%10]++;
  if(mul/10 == 0) break;
  mul = mul/10;  
 }
 
 for(int i=0; i<10; i++){
  cout<<answer[i]<<endl;
 }
}