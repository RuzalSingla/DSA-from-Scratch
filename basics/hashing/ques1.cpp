//Given an array nums of size n which may contain duplicate elements, return a list of pairs where each pair contains a 
//unique element from the array and its frequency in the array.

#include <iostream>
#include <map>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of elements in the array to be created: ";
    cin>>n;
    int nums[n];

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    map<int,int> mpp;
    for(int i=0 ; i<n ;i++){
        mpp[nums[i]]++;
    }

    int cnt=mpp.size();
    int arr[cnt][2];
    int i=0;
    for(auto it:mpp){
        arr[i][0]=it.first;
        arr[i][1]=it.second;
        i++;
    }

    for(int i=0 ; i<cnt ; i++){
        cout<<arr[i][0]<<"->"<<arr[i][1]<<endl;
    }


    return 0;
}