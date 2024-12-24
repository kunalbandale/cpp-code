#include<iostream>
using namespace std;

int main() {
    int teaBags;
    cout << "Enter the number of tea bags you have: " << endl;
    cin >> teaBags;

    if (teaBags < 10) {
        teaBags+=5;
    }
    cout << teaBags << endl;

    return 0;
}