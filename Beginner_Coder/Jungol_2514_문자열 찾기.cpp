#include <iostream>
#include <cstring>
using namespace std;

int main(){
  char arr[10000];
  char find[3];
  cin>>arr;
  int cnt1=0;
  int cnt2=0;

  for(int i=0; i<strlen(arr)-2; i++){
    if(arr[i] == 'K' || arr[i] == 'I'){
      for(int j = 0; j<3; j++){
        find[j] = arr[i+j];
      }
      if(find[0]=='K' && find[1] == 'O' && find[2]=='I'){
        cnt1++;
      }
      else if(find[0]=='I' && find[1] == 'O' && find[2]=='I'){
        cnt2++;
      }
    }
  }
  cout<<cnt1<<"\n"<<cnt2;
}
