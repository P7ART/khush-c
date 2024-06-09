//local and gobal variable 

#include<iostream>

using namespace std;
int glo = 46;
void sum(){
    int a;
   cout<<glo ;
}
int main(){
     sum();
    int glo = 34;
    glo = 56; // here we update the glo value from 34 to 56 . so output will be 56 for glo .
    bool ty = true;// because the value of TRUE in the boolean is 1.
    cout<<glo<<ty;


    return 0;
}    
