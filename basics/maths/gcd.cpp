#include <iostream>
using namespace std;

void gcd(int num1, int num2){
    int num=min(num1,num2);
    int gcd=1;

    for(int i=1 ; i<=num ; i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }

    cout<<"The gcd is:"<<gcd;
}

int main(){
    int n1;
    int n2;
    cout<<"Enter number 1 :";
    cin>>n1;
    cout<<endl<<"Enter number 2 : ";
    cin>>n2;

    gcd(n1,n2);

    return 0;
}