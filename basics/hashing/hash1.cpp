#include <iostream>
using namespace std;

int hashing1(int arr[] , int n , int x){
    //given:max value of array 12
    int arr2[13]={0};
    for(int i=0;i<n;i++){
        arr2[arr[i]]++;
    }

    return arr2[x];


}

int main(){
    int n;
    cout<<"Enter length of array:";
    cin>>n;
    int x;

    int arr[n];

    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    cout<<"Enter value to be counted: ";
    cin>>x;

    int y=hashing1(arr , n , x);
    cout<<y;

    return 0;
}