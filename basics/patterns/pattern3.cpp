#include <iostream>
using namespace std;

void Pattern3(int num){

    for (int i=1 ; i<=num ; i++){
        for(int j=1 ; j<=i ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}

int main(){

    int n;
    cout<<"Enter number of rows to be printed : "<<endl;
    cin>>n;

    Pattern3(n);

    return 0;

}