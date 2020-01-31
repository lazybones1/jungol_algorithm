#include <iostream>
#include <math.h>
using namespace std;

bool find_primeNum(int num){
  int check = true;
  int sq = sqrt(num);
  for(int i=2; i<=sq; i++){
    if(num%i==0){
      check=false;
      break;
    }
  }
  return check;
}

void find_narrow_primeNum(int num){
  int upPrime=0;
  int downPrime=0;
  int cnt = 0;
  while(1){
    if(upPrime != 0 || downPrime != 0){
      break;
    }
    if(find_primeNum(num+cnt)){
      upPrime = num+cnt;
    }
    if(find_primeNum(num-cnt)){
      downPrime = num-cnt;
    }
    cnt++;
  }
  if(downPrime==upPrime && downPrime!=0){
    cout<<downPrime<<endl;
  }
  else if(upPrime != 0 && downPrime !=0){
    cout<<downPrime<<" "<<upPrime<<endl;
  }
  else if(downPrime == 0 && upPrime != 0){
    cout<<upPrime<<endl;
  }
  else if(downPrime != 0 && upPrime == 0){
    cout<<downPrime<<endl;
  }
}

int main(){
  int n;
  cin>>n;
  int arr[100];

  for(int i=0; i<n; i++){
    cin>>arr[i];
    find_narrow_primeNum(arr[i]);
  }
}
