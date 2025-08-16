#include <iostream>
using namespace std;

int main(){

    int marks;
    cout << "Enter marks : ";
    cin >> marks;

    if (marks > 90 && marks <= 100) {
        cout << "A grade" << endl;
    }
    else if (marks > 80 && marks <= 90) {
        cout << "B grade" << endl;
    }
    else {
        cout << "Fail" << endl;
    }

    return 0;
}

