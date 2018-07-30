#include<iostream>
using namespace std;

int inDig(){

    int x;
    cout<<"Enter a single digit number: "<<endl;
    cin>>x;
    return x;

}

bool prima(){

    int z;
    z = inDig();
    if (z==2)
        return true;
    if (z==3)
        return true;
    if (z==5)
        return true;
    if (z==7)
        return true;
    return false;

}

int main(){

    bool pr = prima();
    if (pr)
        cout<<"Prime"<<endl;
    else
        cout<<"Not a prime"<<endl;
   
     return 0;

}
    
