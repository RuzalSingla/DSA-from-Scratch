#include <iostream>
using namespace std;

int main(){

    int num=4;

    for(int i=1 ; i<=num ; i++){
        for(char j='A' ; j<'A'+i ; j++){
            cout<<j<<' ';
        }
        cout<<endl;
    }
    return 0;

}