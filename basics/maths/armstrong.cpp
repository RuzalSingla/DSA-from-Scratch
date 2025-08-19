//Update:Take power of the number of digits and not 3

#include <iostream>
using namespace std;

void CheckArmstrong(int num){
    int temp=num;
    int c=0;

    while(temp>0){
        int rem=temp%10;
        c=c+rem*rem*rem;
        temp=temp/10;

    }

    if(c==num){
        cout<<"It is an armstrong number";
    }else{
        cout<<"it is not an armstrong number";
    }
}

int main(){
    int n;
    cout<<"Enter number to be checked for palindrome : ";
    cin>>n;

    CheckArmstrong(n);
    return 0;
}