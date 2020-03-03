#include <iostream>
using namespace std;

int main(){
  char commend;
  int loop;
  int num;
  int front=0, rear =0;
  int queue[100];

  cin>>loop;
  for(int i=0; i<loop; i++){
    cin>>commend;
    switch(commend){
      case 'i':
        cin>>num;
        queue[rear]=num;
        rear++;
        break;
      case 'o':
        if(front==rear){
          cout<<"empty"<<endl;
        }
        else {
          cout<<queue[front]<<endl;
          front++;
        }
        break;
      case 'c':
        cout<<rear-front<<endl;
        break;
    }
  }
}
