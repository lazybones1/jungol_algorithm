#include <iostream>
#include <cstring>
using namespace std;

int main(){
  while(1){
    int num=0, reverse=0, split=0;
    int sum = 0;
    cin>>num;
    if(num == 0) break;

    for(;num!=0;){
      split = num%10;
      sum +=split;
      reverse += split;
      num/=10;
      reverse *= (num!=0)?10:1;
    }
    cout<<reverse<<" "<<sum<<endl;
  }
}
