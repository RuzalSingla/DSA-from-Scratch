#include <iostream>
using namespace std;
//time complexity: O(log(min(a,b)))
void Euclidean(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }

    if(a==0){
        cout<<b;
    }else{
        cout<<a;
    }
}

int main(){
    int n1;
    int n2;
    cout<<"Enter n1: ";
    cin>>n1;

    cout<<"Enter n2 : ";
    cin>>n2;

    Euclidean(n1,n2);
    return 0;
}