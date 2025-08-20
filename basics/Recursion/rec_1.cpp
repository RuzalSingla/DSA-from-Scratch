#include <iostream>
using namespace std;

void f(int cnt){
    if(cnt==4){
        return;
    }
    else{
        cout<<cnt<<endl;
        cnt=cnt+1;
        f(cnt);
    }
}

int main(){
    int cnt=0;
    f(cnt);
    return 0;
}