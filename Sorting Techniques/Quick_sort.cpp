#include <iostream>
#include <vector>
using namespace std;

int f(vector<int> &arr , int low , int high){
    int x=arr[low];
    int i=low;
    int j=high;

    while(i<j){
        while(arr[i]<=x && i<=high){
            i++;
        }
        while(arr[j]>x && j>=low){
            j--;
        }

        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void quickSort(vector<int> &arr , int low , int high){
    if(low<high){
        int pivot=f(arr,low,high);
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);

    }
}

int main(){
    int n;
    cout<<"Enter:";
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int low=0;
    int high=n-1;

    quickSort(arr,low,high);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }

    return 0;
}