#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"ENter n:";
    cin>>n;
    vector<int> arr(n);
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int x=1;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            x=0;
            break;
        }
    }

    if(x==1){
        cout<<"Sorted";
    }else{
        cout<<"Not sorted";
    }

    return 0;
}