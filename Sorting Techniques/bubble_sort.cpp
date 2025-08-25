#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    for(int i=0;i<=n-2;i++){
        for(int j=0 ; j<n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            
        }
    
    }
     cout<<"The sorted list using selection sort is as follows :"<<endl;

    for(int k=0 ; k<n ; k++){
        cout<<arr[k]<<" , ";
    }

    return 0;
}