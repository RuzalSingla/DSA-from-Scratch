#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements in the array: ";
    cin>>n;

    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    for(int i=0 ; i<n-1 ; i++){
        int min=i;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        
        }
        swap(arr[i],arr[min]);
        
    }

    cout<<"The sorted list using selection sort is as follows :"<<endl;

    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" , ";
    }

    return 0;
}