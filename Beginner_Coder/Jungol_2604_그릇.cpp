#include <iostream>
#include <cstring>
using namespace std;

int main(){
  char bowl[50];
  cin>>bowl;
  char before = bowl[0];
  int height = 10;

  for(int i = 1; i<strlen(bowl); i++){
    if(bowl[i] == before){
      height += 5;
    }
    else{
      before = bowl[i];
      height += 10;
    }
  }
  cout<<height;
}
