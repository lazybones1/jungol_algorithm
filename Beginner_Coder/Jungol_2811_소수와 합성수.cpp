#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int arr[5];

  for(int i=0; i<5; i++){
    cin>>arr[i];
  }

  for(int i=0; i<5; i++){
    if(arr[i]==1){
      cout<<"number one"<<endl;
      continue;
    }
    else{
      int sq = sqrt(arr[i]);
      bool cnt = true;
      for(int j=2; j<=sq; j++){
        if(arr[i]%j==0){
          cout<<"composite number"<<endl;
          cnt=false;
          break;
        }
      }
      if(cnt){
        cout<<"prime number"<<endl;
      }
    }
  }
}
