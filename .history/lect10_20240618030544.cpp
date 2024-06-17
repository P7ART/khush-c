//For ,While<and Do-while loops.
//loops are used for to do any work repetatively in the code or programs.

#include<iostream> 

using namespace std;

int main(){
    //1. For loops in C++.
    //Syntax for loop.
    //for(initialization;condition;increment/decrement){
    //loop body(c++ code)
    //}

    // for (int i= 1; i < 40; i++)
    // {
    //    cout<<i<<endl;
    // }

    // //Example for infinite loop
    // for(int i =0;378<=400;i++){
    //     cout<<i<<endl;
    // }

    // While loop and syntax.
    // while(condition){
    //     C++ statement;
    //     increment/decrement;
    // }
    // int i =10;
    // while(i<=100){
    //     cout<<i<<endl;
    //     i++;
    // }
    // While loop for infinite while loop.
    int i = 1;
    while(true){ //--> here condition (true) means that all condition in while loop is true so the 
       cout<<i<<endl;
       i++;
    }

    return 0;
}