#include<iostream>
using namespace std;

int main() {
    int teaCups;
    cout << "Enter number of tea cups: ";
    cin >> teaCups;

    if (teaCups > 20) {
      cout << "Gold Badge Member";
    } else if (teaCups > 10 && teaCups < 20) {
      cout << "Silver Badge Member";
    } else {
      cout << "Bronze Badge Member";
    }

    return 0;
}