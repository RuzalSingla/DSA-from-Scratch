#include <iostream>
using namespace std;

void PrintAllDivisors(int num){
    int tem=num;
    cout<<"Divisors are as follows";

    for(int i=1 ; i<=tem ; i++){
        if(tem%i==0){
            cout<<i<<endl;
        }
    }


}

int main(){
    int n;
    cout<<"Enter number whose divisors have to be found: "<<endl;
    cin>>n;

    PrintAllDivisors(n);
    return 0;
}