
// the use of scope resloution operator [::]
//use to print the value of gobal variable with same variable name

// #include<iostream>

//  using namespace std;
// int c = 56;
// int f = 455;
// int main(){
//     int a,b,c;
//     cout<<"enter the value of a"<<endl;
//     cin>>a;
//     cout<<"enter the value of b"<<endl;
//     cin>>b;
//     c =  a+b;
//     cout<<"the cvalue of c is "<<c<<endl;
//     cout<<"the value of c:"<<::c<<endl;
//     cout<<"the value of f is :"<<f<<endl;
// return 0;
// }

                   //---->Get to know the size of the value in variable 


// #include<iostream>

// using namespace std;

// int main(){
// int d = 23;
// float e =45.23f;
// long double g = 45.44542l;
// char t = 'Q';
// cout<<"the size of d"<<sizeof(23)<<endl; 
// cout<<"the size of g"<<sizeof(45.445421)<<endl; 
// cout<<"the size of t "<<sizeof(t)<<endl;
// cout<<"the size of e"<<sizeof(e)<<endl;     
//  return 0;
// }

                      //------> the Reference variable.
                      /*this means calling one same value by different different point of reference . but the point of  reference  should of same
                      datatype */
                      //we use {&}  operator for reference  the value by different point .
    // #include<iostream>
    // using namespace std;

    // int main(){
    //     char a = 'W';
    //     char & b = a;
    //     cout<<"the value of b:"<<b;
    //     return 0 ;
        
    // }                  


              //----------->Typecasting
               // Typecasting means converting one datatype to another datatype.

         #include<iostream>

         using namespace std;

         int main(){
            float a =23.344;
            long double r = 46.56655;
             
            cout<<"the convert to float :"<<int(a);
            return 0;
         }      