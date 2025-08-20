#include <iostream>
using namespace std;

void f(int i , int arr[] , int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);
}

int main(){
    int n;
    cout<<"Enter number of elements of array : ";
    cin>>n;
    int c;

    int arr[n];

    for(int i=0 ; i<n ; i++){
        cin>>c;
        arr[i]=c;
    }
    f(0,arr,n);

    cout<<endl;
    for(int i=0 ; i<n ; i++){

        cout<<arr[i]<<endl;
    }

    return 0;
}