#include <iostream>
#include <cmath>
using namespace std;

void CountDigits(int num){
    //O(log10(n))
    int temp=0;
    int x=num;
    while(num>0){

        temp++;
        num=num/10;
        
    }
    cout<<temp<<" number of digits are there in "<<x<<endl;
}

//Method2 using log

void LogMethod(int num){
    int count=int(log10(num)+1);
    cout<<count;
}

int main(){
    int n;

    cout<<"Enter the number whose digits are to be calculated :";
    cin>>n;

    CountDigits(n);
    LogMethod(n);

}