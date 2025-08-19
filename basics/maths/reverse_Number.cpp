#include <iostream>
#include <cmath>
using namespace std;

void ReverseNum(int n){
    int temp=n;
    int m;
    int c=0;

    while(temp>0){

        m=temp%10;
        c=c*10+m;
        temp=temp/10;
    }

    cout<<"The reversed number is : "<<c;
}

int main(){
    int num;
    cout<<"Enter Number to be reversed: "<<endl;
    cin>>num;

    ReverseNum(num);
    return 0;
}