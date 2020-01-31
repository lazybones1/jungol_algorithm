#include <iostream>
#include <math.h>
using namespace std;

int find_primeNumber(int num){
  if(num==1){
    return 0;
  }
  else{
    bool check = true;
    int sq = sqrt(num);
    for(int i=2; i<=sq; i++){
      if(num%i == 0){
        check = false;
        break;
      }
    }
    if(check) return num;
    else return 0;
  }
}

int main(){
  int m, n;
  cin>>m>>n;
  int cnt = 0;
  int arr[10000];
  int sum = 0;
  for(int i=m; i<=n; i++){
    if(find_primeNumber(i) != 0){
      arr[cnt++] = find_primeNumber(i);
    }
  }
  if(cnt == 0){
    cout<<"-1";
  }
  else{
    for(int i=0; i<cnt; i++){
      sum+=arr[i];
    }
    cout<<sum<<"\n"<<arr[0];
  }
}
