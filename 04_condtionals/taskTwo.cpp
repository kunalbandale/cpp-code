#include <iostream>
 using namespace std;

int main() {
   int time;

   cout << "Enter the time to check!!" << endl;
   cin >> time;

   if(time >= 8 && time <= 18) {
     cout << "Shop is Open!" << endl;
     } else {
       cout << "Shop is Closed!" << endl;
     }
    return 0;
}