//nested if

#include <iostream>
using namespace std;

int main(){

    int age;
    cout<<"Enter your age : ";
    cin>>age;

    if(age<18){
        cout<<"Not eligible for the job!";
    }

    else if(age>=18){
        if(age<55){
            cout<<"Eligible for the job!";
        }
        else if(age>-55 && age<=57){
            cout<<"Eligible for the job, but retirement soon!";
        }

        else if(age>57){
            cout<<"retirement time!";
        }
        return 0;
    }

}
