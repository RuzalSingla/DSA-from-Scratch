#include <iostream>
using namespace std;

void CheckPrime(int num){
    int temp=num;
    int c=true;

    for(int i=2;i<temp;i++){
        if(temp%i==0){
            c=false;
            break;
        }
    }
    if(c==true){
        cout<<"It is Prime";
    }else{
        cout<<"It is not Prime";
    }
}

int main(){
    int n;
    cout<<"Enter number to be checked:"<<endl;
    cin>>n;

    CheckPrime(n);
    return 0;
}