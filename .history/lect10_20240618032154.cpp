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
    // }                        // isme ek baar incerement/decrement lagega do baar laga doge tuh value do baar update hu jayegi.

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
    // int i = 1;
    // while(true){ //--> here condition (true) means that all condition in while loop is true so the loop is infinite.
    //    cout<<i<<endl;
    //    i++;
    // }
   
      // Do While loop and syntax.
      // do {
     // C++ statement;
     //increment/decrement;
    // }while(condition);

    int i =6;
    do{
       cout<<i<<endl;
       i++;
       i++;                     // 
       i++;
       i++;
       i++;
       i++;
    }while(i<=60);// isme [do while loop] aap condition koi bhi condition do true ya false wo ek baar bina condtion check kare  loop chala dega usske baad fir wo condition dekh ke chalayega.
   
    return 0;
}