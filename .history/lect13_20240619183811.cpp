//Arrray and Pointer.
//array case sensetive hota h .

#include<iostream>
using namespace std;

int main(){
    // // Array Example
    int marks[] = {23, 45, 56, 89};

    // int mathMarks[4];// ye jaruri nahi h ki tum 4 likho.
    // mathMarks[0] = 2278;
    // mathMarks[1] = 738; //ham ase index value pe marks assign bhi akr sakte ha.
    // mathMarks[2] =34;
    // mathMarks[3]=675;

    // mathMarks[2]=60;
    // cout<<"These are math marks"<<endl;
    // cout<<mathMarks[0]<<endl;
    // cout<<mathMarks[1]<<endl;
    // cout<<mathMarks[2]<<endl;
    // cout<<mathMarks[3]<<endl;

    // // You can change the value of an array bas print hone se phale badalna.
    // marks[2] = 48;
    // cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
  
    // for(int i = 0;i<5;i++){
    //     cout<<"the marks of student:"<<marks[i]<<endl;
    // }
    

    // // Quick quiz: do the same using while and do-while loops?
    // int i =0;
    // while(i<4){
    //     cout<<"the marks of student:"<<marks[i]<<endl;
    //     i++;
    // }

    // // Pointers and arrays
    int* p = marks;
    cout<<*p<<endl; // ye marks[0] ki value dega.
    cout<<*(p+1)<<endl; // ye marks[1] ki value dega
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    //incerement and decrement operator ke sath.
    cout<<*p<<endl;
     cout<<*(p+1)<<endl;
    
    return 0;
}
