#include <iostream>
using namespace std;

void Pattern5(int num){
    for(int i=num;i>0;i--){
        for(int j=i ; j>0 ; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter number of rows to be printed :"<<endl;
    cin>>n;

    Pattern5(n);
    return 0;

}