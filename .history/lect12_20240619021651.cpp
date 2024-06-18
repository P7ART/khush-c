

// Pointers-->A pointer is a data type which holds the address of other data type.
// The [“&”] operator is called [“address off"] operator, and the ["*”] operator is called [“value at”] dereference operator. 


#include<iostream>
using namespace std;
int main() {
    //The [“&”] operator is called [“address off"] operator,kisi bhi  variable ke aage agar ham [&]ye laga de hame address milega.
    int a =45;//{0x61ff08} ye  example address h isska matlab mera computer mei ye address assign hus a ko work karne ke liye.
    int *b=&a;//idhar ham wahi same address [b] ko bhi hold kar diye h kyuki wo ek {Pointer h}.
    cout << "the address of a:"<<&a << endl;
    cout << "the value of a:"<<b << endl;
    //he ["*”] operator is called [“value at”] dereference operator. --> is



return 0;
}