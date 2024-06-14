/*----> Control structure,iF Else and Switch-case Statement.it is use for 
       better flow if program without an error*/
                              // --> Selection control statement--> IF ELSE STATEMENT.
        #include<iostream>
        using namespace std;

        int main(){
              int age;
             cout<<"tell me your age"<<endl;
             cin>>age;
            // if((age>18)&&(age>22)){                                 
            // cout<<"you are allowed to party"<<endl;}  //jase agar tume check karna hu ki 18 se upar h lekin 22 saal ke log pee sakte h party mei uske liye {&&}.
            // else if(age==10){
            //     cout<<"you are allowed on kid pass"<<endl;
            // }
            // else if(age<22){
            //     cout<<"you cannot drink in the party "<<endl;
            // }
            // else{
            //     cout<<"you are not allowed to party"<<endl;
            // }


                                // --> Selection control statement--> SWITCH-CASE STATEMENT.

                   switch (age)
                   {                                            /*yaha par {break} statement ka use isliye hua [switch case] mei kyuki agar jase hi agar koi swith case pura 
                   case 18:                                       tuh turant break hoke bahar aa jaye aur program wahi khatam ho jaye...lekin agar ham break statement nahi 
                    cout<<"you are 18";                           lagate h tuh wo sara switch case statement wo ek saath excuet ho jayega output *
                    //break;
                    case 22:
                    cout<<"you are allowed to drink";
                    //break;
                    case 30:
                    cout<<"you are not allowed to drink beer";
                    //break;
                    case 10:
                    cout<<"you are not alloed";
                    //break;
                   
                   default:
                   cout<<"not found in guest list";
                    //break;
                   }             

            return 0;
        }




