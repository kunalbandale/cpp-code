#include <iostream>
using namespace std;

int main() {
    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout<<"Enter number of Cups :";
    cin >> cups;
    cout<<"Enter the price per cup:";
    cin >> pricePerCup;

    totalPrice = pricePerCup * cups;
    // apply 5% discount if total price is above 100
    if (totalPrice > 100) {
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Discounted Price : " << discountedPrice << endl;
    } else {
        cout << "Total Price : " << totalPrice << endl;
    }


    return 0;

}