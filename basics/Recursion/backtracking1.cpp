//Print from one to n without using +


#include <iostream>
using namespace std;

void PrintLinear(int i){

    if(i<1){
        return;
    }
    else{
        PrintLinear(i-1);
        cout<<i<<endl;
    }
}

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int i=n;

    PrintLinear(i);
    return 0;
}