#include <iostream>
using namespace std;
 
int main(){
 int num1, num2, num3, num4, num5, num6;
 cin>>num1>>num2; 
 num3 = num1*(num2%10);
 num4 = num1*((num2%100)/10);
 num5 = num1*(num2/100);
 num6 = num3+(num4*10)+(num5*100);
  
 cout<<num3<<"\n"<<num4<<"\n"<<num5<<"\n"<<num6<<endl; 
}