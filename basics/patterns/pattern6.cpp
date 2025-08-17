#include <iostream>
using namespace std;

void Pattern6(int num){
    for(int i=1 ; i<=num;i++){
        for(int j=1 ; j<=num-i+1 ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter number of rows to be printed :"<<endl;
    cin>>n;

    Pattern6(n);
    return 0;

}