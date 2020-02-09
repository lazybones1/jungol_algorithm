#include <iostream>
#include <cstring>
using namespace std;

int main(){
  int A,B;
  char N[1000000];
  while(1){
    cin>>A>>N>>B;
    if(A == 0)break;
    if(N[0] == '0'){
      cout<<"0"<<endl;
      continue;
    }
    long long i, j;
    long long sum=0;
    for(i=strlen(N)-1, j=1;i >= 0;i--, j*=A){
      if(N[i] >= 'A') N[i] = '9'+(N[i] - 'A') + 1;
      sum+=j*(N[i]-'0');
    }

    char str[100];
    for(i=0;sum > 0;sum/=B, i++){
      if(sum%B>9){
        str[i] = (sum%B)-10+'A';
      }
      else{
        str[i] = (sum%B)+'0';
      }
    }

    for(i = i-1;i >= 0;i--){
      cout<<str[i];
    }
    cout<<endl;
  }
}
