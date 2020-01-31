#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int m, n;
  cin>>m>>n;
  int cnt = 0;
  bool arr[2000000] = {};

  arr[1] = true;
  for(int i=2; i*i<=n; i++){
    if(!arr[i]){
      for(int j=i*i; j<=n; j+=i){
        arr[j] = true;
      }
    }
  }

  for(int i = m; i<=n; i++){
    if(!arr[i]) cnt++;
  }
  cout<<cnt;
}
