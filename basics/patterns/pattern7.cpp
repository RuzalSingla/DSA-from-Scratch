#include <iostream>
using namespace std;

void Pattern7(int n){

    for(int i=1 ; i<=n ; i++){

        for(int j=1 ; j<=n-i ; j++){
            cout<<" ";
        }

        for(int k=1; k<=2*i-1 ; k++){
            cout<<"*";
        }

        cout<<endl;

    }

}

int main(){

    int num;
    cout<<"enter number of rows to be printed: "<<endl;
    cin>>num;
    Pattern7(num);
    return 0;
}