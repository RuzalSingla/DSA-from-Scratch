//Time Complexity:O(n)

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

    int largest=arr[0];
    int second_largest=INT32_MIN;
    
    for(int j=0 ; j<n ;j++){
        if(arr[j]>largest){
            second_largest=largest;
            largest=arr[j];
        }

        if(arr[j]<largest && arr[j]>second_largest){
            second_largest=arr[j];
        }
    }

    cout<<"Second largest is :"<<second_largest;
    

    return 0;
}