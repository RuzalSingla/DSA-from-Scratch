#include <iostream>
#include <iterator>
using namespace std;


int main(){
    
    string wordi;
    cout<<"Enter string to be checked :";
    cin>>wordi;

    int hash[26]={0};
    for(int i=0 ; i<wordi.size() ; i++){

        hash[wordi[i]-'a']++;
        
    }
    int q;
    cin>>q;
    while(q--){
        char c ;
        cin>>c ;
        cout<<hash[c-'a']<<endl;
    }

    


    return 0;
}