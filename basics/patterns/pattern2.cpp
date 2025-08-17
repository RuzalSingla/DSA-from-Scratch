#include <iostream>
using namespace std;

void Pattern2(int num){

    for (int i=0 ; i<num ; i++){
        for(int j=0 ; j<=i ; j++){
            cout<<" * ";
        }

        cout<<endl;
    }
}

int main(){

    int n;
    cout<<"Enter number of rows to be printed: "<<endl;
    cin>>n;

    Pattern2(n);
    return 0;

}