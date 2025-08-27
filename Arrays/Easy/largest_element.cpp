#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max1=arr[0];
    for(int j=1;j<n;j++){
        if(arr[j]>max1){
            max1=arr[j];
        }
    }

    cout<<max1;

    return 0;
}