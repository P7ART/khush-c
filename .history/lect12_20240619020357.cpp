

// Pointers-->A pointer is a data type which holds the address of other data type.
// The [“&”] operator is called [“address off"] operator, and the ["*”] operator is called [“value at”] dereference operator. 


#include<iostream>
using namespace std;
int main() {
    int a =45;//{0x61ff08} ye  example address h isska matlab mera computer mei ye address assign hus a ko work karne ke liye.
    int *b=&a;//idhar ham wahi same address b ko bhi hold kar diye h
    cout << b << endl;
return 0;
}