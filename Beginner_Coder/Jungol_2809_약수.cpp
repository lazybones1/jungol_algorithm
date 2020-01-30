#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 int arr[10000];
 int cnt=0;
 int sq = (int)sqrt(n);

 for(int i=1; i<=sq; i++){
  if(n%i==0){
   arr[cnt++] = i;
   if(n/i != i){
    arr[cnt++]=n/i;
   }
  }
 }
 sort(arr, arr+cnt);
 for(int i=0; i<cnt; i++){
  cout<<arr[i]<<" ";
 }
}
