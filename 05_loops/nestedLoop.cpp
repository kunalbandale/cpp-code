#include <iostream>
using namespace std;

int main() {
    string teaTypes[3] = {"Green", "Garlic", "Masala"};
    for(int i = 0 ; i < 3 ; i++){
      cout << "Brewing " << teaTypes[i] << "...." << endl;
      for(int j = 1 ; j <= 3 ; j++) {
          cout << "Brewing " << j << endl;
      }

    }

    return 0;
}