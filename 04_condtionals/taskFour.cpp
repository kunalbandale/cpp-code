#include <iostream>
using namespace std;

int main() {
  int choice;
  double price;

    cout << "Select your tea\n";
    cout << "1. Green Tea\n";
    cout << "2. Lemon Tea\n";
    cout << "3. Oolong Tea\n";
    cout << "4. Enter your choice in number\n";

    cin >> choice;

    switch (choice) {
      case 1:
        price = 2.0;
        cout << "Green Tea " << price << endl;
        break;
      case 2:
        price = 5.0;
        cout << "Lemon Tea " << price << endl;
        break;
      case 3:
        price = 8.0;
        cout << "Oolong Tea " << price << endl;
        break;

        default:
          cout << "Invalid Choice\n";
          break;
    }

    return 0;
}