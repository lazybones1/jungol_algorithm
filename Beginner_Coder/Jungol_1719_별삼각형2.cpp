#include <iostream>
using namespace std;

void star1(int n){
 int tmp=0;
 for(int i=0; i<n; i++){
  if(i<=n/2){
   for(int j = 0; j<i+1; j++){
    cout<<"*";
   }
  }
  else{
   for(int j = n/2-tmp; j>0; j--){
    cout<<"*";
   }
   tmp++;
  }
  cout<<endl;
 }
}
void star2(int n){
 int tmp = 1;
 int tmp2 = 1;
 for(int i =0; i<n; i++){
  if(i<=n/2){
   for(int j = (n/2)-i; j>0; j--){
    cout<<" ";
   }
   for(int j = i; j>=0; j--){
    cout<<"*";
   }
  }
  else{
   for(int j = tmp2; j>0; j--){
    cout<<" ";
   }
   for(int j = n/2-tmp; j>=0; j--){
    cout<<"*";
   }
   tmp2++;
   tmp++;
  }
  cout<<endl;
 }
}
void star3(int n){
 for(int i =0; i<n; i++){
  if(i<=n/2){
   for(int j = i; j>0; j--){
    cout<<" ";
   }
   for(int j = 0; j<n-(2*i); j++){
    cout<<"*";
   }
  }
  else{
   for(int j = n-i-1; j>0; j--){
    cout<<" ";
   }
   for(int j = (2*i)-n+2; j>0; j--){
    cout<<"*";
   }
  }
  cout<<endl;
 }
}
void star4(int n){
 int tmp = 1;
 for(int i =0; i<n; i++){
  if(i<n/2){
   for(int j = i; j>0; j--){
    cout<<" ";
   }
   for(int j = n/2-i; j>=0; j--){
    cout<<"*";
   }
  }
  else{
   for(int j = n/2; j>0; j--){
    cout<<" ";
   }
   for(int j = tmp; j>0; j--){
    cout<<"*";
   }
   tmp++;
  }
  cout<<endl;
 }
}

int main(){
 int n, m;
 cin>>n>>m;
 if(0<n && n<101 && n%2==1 && 0<m && m<5){
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
   case 4:
    star4(n);
    break;
  }
 }
 else{
  cout<<"INPUT ERROR!"<<endl;
 }
}
