/*----> Control structure,iF Else and Switch-case Statement.it is use for 
       better flow if program without an error*/
        
        #include<iostream>
        using namespace std;

        int main(){
            int age;
            cout<<"tell me your age"<<endl;
            cin>>age;
            if(age>18){                                 
            cout<<"you are allowed to party"<<endl;}  //jase agar tume check karna hu ki 18 se upar h lekin 22 saal ke log pee sakte h party mei uske liye {&&}.
            else if(age==10){
                cout<<"you are allowed on kid pass"<<endl;
            }
            else if(age<22){
                cout<<"you"
            }
            else{
                cout<<"you are not allowed to party"<<endl;
            }

            return 0;
        }



