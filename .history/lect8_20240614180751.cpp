             //------>without using {constants}  keyword we upgrade the value of the same variable again in code.

    //    #include<iostream>

    //    using namespace std;

    //    int main(){
    //     int a = 24;
    //      a = 34;   //idhar ham same variable ko nayi value de rahe h.
    //     cout<<"the value of a is :"<<a;
    //     cout<<"the value of a is :"<<a;

    //     return 0;
    //    }       

                   /*-----> Using {Constants} isska matlab jo ham constants mei value change kar de rahe the 
                   wo ab change nahi hogi... aur wo ek constant variable ko assign hogi.. aur fir uss variable 
                   mei koi aur value entry nahi hogi*/



// #include<iostream>
                    
//  using namespace std;
//   int main(){
//     const int a =  43;
//     cout<< "the value of a is :"<<a;
//    // a = 23; // here it is showing error because we use const that in this code a will have only 43 value ..so no other value can upgrade. 
//     cout<< "the value of a is :"<<a;
     
//     return 0; 

//   }                    
                  /*---->Manipulator > its means to proper represent the code 
                  output. we use manipulator type {setw},{endl} etc. 
                  the header file by which we can apply setw is <iomanip>
                  use hoti taki ham field width set kar sake */

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // without using setw manipulator 
    // int a = 4,b=45,c=2356;
    // cout<<"the value of a "<<a<<endl;
    // cout<<"the value of b "<<b<<endl;
    // cout<<"the value of c "<<c<<endl;
    // // with using setw manipulator 
    // cout<<"the value of a "<<setw(4)<<a<<endl;
    // cout<<"the value of b "<<setw(4)<<b<<endl;
    // cout<<"the value of c "<<setw(4)<<c<<endl;

             /* --->[Operator precedence] means ki jo operator h wo aapne 
             order ke according or associativity . excute honge program aur algoritms ke andar*/

    int a = 34,b =78;
    int c = (((a*5)+23+b)-23); /*idhar ham bracket algorithm mei operator ke table mei
    order or ass


    cout<<"the result is "<<c<<endl;










    return 0;

}