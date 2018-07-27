#include<iostream>
using namespace std;

int addVal(int x, int y){

  return x+y;

}

int subVal(int r, int t){

  return r-t;

}

int mulVal(int u, int h){

  return u*h;

}

int diVal(int g, int f){

  return g/f;

}

int main(){
  int a;
  int b;  

  cout<<"Enter an value: "<<endl;
  cin>>a;
  cout<<"Enter an value: "<<endl;
  cin>>b;

  cout<<"Addition is: "<<addVal(a,b)<<endl;
  cout<<"Subtraction is: "<<subVal(a,b)<<endl;
  cout<<"Multiplication is: "<<mulVal(a,b)<<endl;
  cout<<"Division is: "<<diVal(a,b)<<endl;

  return 0;

}
