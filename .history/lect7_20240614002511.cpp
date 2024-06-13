
// the use of scope resloution operator [::]
//use to print the value of gobal variable with same variable name

#include<iostream>

using namespace std;
int c = 56;
int 
int main(){
    int a,b,c;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    c =  a+b;
    cout<<"the cvalue of c is "<<c<<endl;
    cout<<"the value of c:"<<::c<<endl;

    return 0; 

}