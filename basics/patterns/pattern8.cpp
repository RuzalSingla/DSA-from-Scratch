#include <iostream>
using namespace std;

void Pattern8(int num){

    for(int i=num ; i>0 ; i--){

        for(int j=1 ; j<num-i+1 ; j++){
            cout<<" ";
        }

        for(int k=1 ; k<2*i ; k++){
            cout<<"*";
        }
        cout<<endl;
    }

}


int main(){

    int n;
    cout<<"Enter number of rows to be printed : "<<endl;
    cin>>n;

    Pattern8(n);
    return 0;

}