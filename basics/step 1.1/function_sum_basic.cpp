#include <iostream>
using namespace std;

int Sum(int num1, int num2){
    int num3 = num1+num2;
    return num3;

}

int main(){

    int n1,n2;
    cin>>n1>>n2;
    int x=Sum(n1,n2);
    cout<<"The sum of "<<n1<<" and "<<n2<<" is "<<x<<endl;
    return 0;

}

