//Print linearly from n to 1

#include <iostream>
using namespace std;

void PrintLinear(int num){

    if(num>0){
        cout<<num<<endl;
        num--;
        PrintLinear(num);

    }
    else{
        return;
    }
}

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;

    PrintLinear(n);
    return 0;
}