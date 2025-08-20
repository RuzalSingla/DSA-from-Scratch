//Print from n to 1 without using -

//Print from one to n without using +


#include <iostream>
using namespace std;

void PrintLinear(int i,int n){

    if(i>n){
        return;
    }
    else{
        PrintLinear(i+1,n);
        cout<<i<<endl;
    }
}

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int i=1;

    PrintLinear(i,n);
    return 0;
}