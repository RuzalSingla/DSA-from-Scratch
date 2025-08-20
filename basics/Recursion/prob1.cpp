#include <iostream>
using namespace std;

void Naming(string n , int cnt){
    if(cnt<=5){
        cout<<n<<endl;
        cnt++;
        Naming(n,cnt);
    }else{
        return;
    }
}

int  main(){
    int cnt=0;
    string name;
    cout<<"Enter name to be printed :";
    cin>>name;

    Naming(name,cnt);
    return 0;
}