#include <iostream>
#include <cmath>
using namespace std;

void PalindromeNum(int n){
    int temp=n;
    int m;
    int c=0;

    while(temp>0){

        m=temp%10;
        c=c*10+m;
        temp=temp/10;
    }

    if(c==n){
        cout<<"it is a palindrome";
    }else{
        cout<<"It is not a palindrome";
    }
}

int main(){
    int num;
    cout<<"Enter Number to be reversed: "<<endl;
    cin>>num;

    PalindromeNum(num);
    return 0;
}