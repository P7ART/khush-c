

// Pointers-->A pointer is a data type which holds the address of other data type.
// The [“&”] operator is called [“address off"] operator, and the ["*”] operator is called [“value at”] dereference operator. 


#include<iostream>
using namespace std;
int main() {
    int a =45;//{0x61ff08} ye  example address h isska 
    int *b=&a;
    cout << b << endl;
return 0;
}