//remove duplicate from sorted array 
//using two pointer approach

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
   
    int i=1;
    int j=1;

    while(i<n){
        if(arr[i]!=arr[i-1]){
            arr[j]=arr[i];
            j++;
        
        }
        i++;
    }



    

    while(j<n){
        arr[j]=0;
        j++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    

    return 0;
}

