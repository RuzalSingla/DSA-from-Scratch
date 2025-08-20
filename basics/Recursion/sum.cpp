//sum of first n numbers

#include <iostream>
using namespace std;

int SumRec(int n ){
        if(n==0){
            return 0;
        }
        return n + SumRec(n-1);
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
   

    int x=SumRec(n);
    cout<<x;
    return 0;
}