// Header file and operator 
// there are two type of header file .
//System header file : They come with compiler 
#include <iostream>
//User defined header file : this can be creat by the user in the current directory.
#include"this.go"
using namespace std;

int main(){
    cout<<"header file and operators.";
    return 0;
}
// For more header files go to "C++ reference for header file ."

// OPERATOR

#include <iostream>
using namespace std;
int main() {
	int a = 11;
	int b = 5;

	cout << "a + b is :" << a+b << endl; 

	cout << "a - b is :" << a-b << endl; 

	cout << "a * b is :" << a*b << endl; 

	cout << "a / b is :" << a/b << endl; 
	cout << "a % b is :" << a%b << endl; 
	cout << "a++ is :" << a++ << endl; 
	cout << "a-- is :" << a-- << endl; 


	return 0;
}