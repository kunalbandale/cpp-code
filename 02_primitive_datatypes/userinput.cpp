#include <iostream>
 using namespace std;

 int main() {
    string userTea;
    int teaQty;

    cout << "Your Order Please!!" << endl;
    getline(cin,userTea);

    // ask for Qty
    cout << "Qty of Tea" << endl;
    cin >> teaQty;

    cout << userTea << endl;
    cout << teaQty << endl;

    return 0;
 }