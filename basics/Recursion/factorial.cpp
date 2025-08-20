#include <iostream>
using namespace std;

int Factorial(int num){
    if(num==1){
        return 1;
    }

    return num*Factorial(num-1);
}

int main(){
    int n;
    cout<<"enter number whose factorial is to be calculated : ";
    cin>>n;

    int result=Factorial(n);
    cout<<result;

    return 0;
}