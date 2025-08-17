//combining 7 and 8

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
        

    }cout<<" ";

}

void Pattern8(int num){

    for(int i=num ; i>0 ; i--){

        for(int j=1 ; j<num-i+1 ; j++){
            cout<<" ";
        }

        for(int k=1 ; k<2*i ; k++){
            cout<<"*";
        }
        cout<<endl;
        cout<<" ";
    }
    

}


int main(){

    int num;
    cout<<"enter number of rows to be printed: "<<endl;
    cin>>num;
    Pattern7(num);
    Pattern8(num-1);
    return 0;
}