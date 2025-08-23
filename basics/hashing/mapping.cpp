#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements in the array: ";
    cin>>n;
    int arr[n];

    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    map<int,int> mpp;
    for(int i=0 ; i<n ; i++){
        mpp[arr[i]]++;
    }

    //iterating in the map
    for (auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    return 0;
}