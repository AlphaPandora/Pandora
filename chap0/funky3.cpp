#include<iostream>
using namespace std;

int getVal(){

  int x;
  cout<<"Enter value: "<<endl;
  cin>>x;
  return x;

}

int main(){

int a,b;
a = getVal();
b = getVal();
cout<<a<<" + "<<b<<" = "<<a+b<<endl;

return 0;
}


