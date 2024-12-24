#include<iostream>
using namespace std;

int main() {
    bool isStudent;
    int cups;

    cout << "Are you a student?(1-yes , 0-no)" << endl;
    cin >> isStudent;
    cout << "How many cups of tea have you purchased?" << endl;
    cin >> cups;

    if(isStudent==0 || cups >= 15) {
      cout << "You are elgible for a discount" << endl;
     } else {
       cout << "You are not elgible for a discount" << endl;
     }

    return 0;
}