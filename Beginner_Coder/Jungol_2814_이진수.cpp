#include <iostream>
#include <cstring>
using namespace std;

int main(){
  char n[30];
  cin>>n;
  int sum = 0;
  int len = strlen(n);

  for(int i=0; i<len; i++){
    sum = sum*2+(n[i]-'0');
  }

  cout<<sum;
}
