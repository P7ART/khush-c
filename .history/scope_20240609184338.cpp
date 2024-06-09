//local and gobal variable 

#include<iostream>

using namespace std;
int glo = 46;
void sum(){
    int a;
}
int main(){
    int glo = 34;
    glo = 56; // here we update the glo value from 34 to 56 . so output will be 56 for glo ,
    cout<<glo;
    sum();

    return 0;
}    
