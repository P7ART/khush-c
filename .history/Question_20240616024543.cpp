/*Question 1 
Basic if Statement:
Write a C++ program to check if a number entered by the user is even or odd using an if-else statement.
*/

#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"enter the num :"<<endl;
    cin>>num;

    if(num%2==0){
        cout<<"the number is even:"<<endl;
    }
    else{
        cout<<"the number is odd:"<<endl;
    }

    return 0 ;
}

/* Ouestion 2 Nested if-else Statement:
Write a program to check whether a year entered by the user is a leap year or not using nested if-else statements.
*/

    #include<iostream>

    using namespace std;

    int main(){
        int year;
        cout<<"enter the year to check wheather is leap year or not:"<<endl;
        cin>>year;
        if(year%4==0){
                cout<<"the year is a leap year:"<<endl;
        }
        else{
            cout<<"its not a leap year:"<<endl;
        }
 return 0;
    }
    /*Question 3 Multiple if-else Statements:
Create a program that accepts a character input and determines if it is a vowel (a, e, i, o, u) or a consonant using multiple if-else statements.
    */
        #include<iostream>

        using namespace std;

        int main(){
            char ty;                                              // ye question bar bar if else laga ke ho sakta tha lekin hamne isse  logical operator se kiya.
            cout<<"enter the character to check wheather is vowel or consonant:"<<endl;
            cin>>ty;
            if(ty=='a'||ty=='e'||ty=='i'||ty=='o'||ty=='u'){
                cout<<"enter char is vowel:"<<endl;

            }
            else{
                cout<<"enter char is not vowel"<<endl;
            }
            return 0;

            
        }
        /*Question 4 Chained if-else Statement:

Write a program to classify a student's marks into grades (A, B, C, D, E) based on predefined ranges using a chained if-else ladder.

        */
         #include<iostream>
          using namespace std;

          int main(){
            int marks;
            cout<<"enter the marks to check the grade:"<<endl;
            cin>>marks;
            if(marks>=90){
                cout<<"grade is A:"<<endl;
                }
                else if(marks>=80){
                    cout<<"grade is B:"<<endl;
                    
            return 0;
          }