#include <iostream>
using namespace std;

int main(){
  int stack[100];
  int top=-1;
  char commend;
  int loop;
  cin>>loop;
  int num;

  for(int i=0; i<loop; i++){
    cin>>commend;
    switch(commend){
      case 'i':
        cin>>num;
        stack[top+1] = num;
        top++;
        break;
      case 'o':
        if(top==-1){
          cout<<"empty"<<endl;
        }
        else {
          cout<<stack[top]<<endl;
          top--;
        }
        break;
      case 'c':
        cout<<(top+1)<<endl;
    }
  }
}
