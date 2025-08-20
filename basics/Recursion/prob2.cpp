//Print linearly from one to n

#include <iostream>
using namespace std;

void PrintLinear(int num , int cnt){

    if(cnt<=num){
        cout<<cnt<<endl;
        cnt++;
        PrintLinear(num,cnt);

    }
    else{
        return;
    }
}

int main(){
    int n;
    int cnt=1;
    cout<<"enter number: ";
    cin>>n;

    PrintLinear(n , cnt);
    return 0;
}