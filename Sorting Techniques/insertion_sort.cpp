#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    
    }
     cout<<"The sorted list using selection sort is as follows :"<<endl;

    for(int k=0 ; k<n ; k++){
        cout<<arr[k]<<" , ";
    }

    return 0;
}