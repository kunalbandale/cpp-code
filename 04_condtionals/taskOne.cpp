// write a program that checks if the user wants to order Green Tea. if user types ""Green Tea the program should confirm their order

#include <iostream>
 using namespace std;

 int main() {
   string teaTypeOrder;

   cout << "Enter tea type which you want to buy" << endl;
   getline(cin,teaTypeOrder);

   if(teaTypeOrder == "Green Tea" || "green tea") {
     cout << "Order Confirmed  " << teaTypeOrder << endl;
     }

   return 0;
 }