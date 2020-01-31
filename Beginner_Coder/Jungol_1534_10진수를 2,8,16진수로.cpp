#include <iostream>
#include <string>
using namespace std;

void toTwo(int n){
  string num;
  while(1){
    num = to_string(n%2) + num;
    if(n<2) break;
    n = n/2;
  }
  cout<<num;
}

void toEight(int n){
  string num;
  while(1){
    num = to_string(n%8) + num;
    if(n<8) break;
    n = n/8;
  }
  cout<<num;
}

void toSixteen(int n){
  string num;
  while(1){
    if(n%16==10){
      num = 'A'+num;
    }
    else if(n%16==11){
      num = 'B'+num;
    }
    else if(n%16==12){
      num = 'C'+num;
    }
    else if(n%16==13){
      num = 'D'+num;
    }
    else if(n%16==14){
      num = 'E'+num;
    }
    else if(n%16==15){
      num = 'F'+num;
    }
    else{
      num = to_string(n%16) + num;
    }
    if(n<16) break;
    n = n/16;
  }
  cout<<num;
}

int main(){
  int n, m;
  cin>>n>>m;
  switch (m) {
    case 2:
     toTwo(n);
     break;
    case 8:
      toEight(n);
      break;
    case 16:
       toSixteen(n);
       break;
  }

}
