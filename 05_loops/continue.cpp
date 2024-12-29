#include <iostream>
using namespace std;

int main() {
  string teaTypes[3] = {"Green", "Garlic", "Masala"};
  for (int i = 0; i < 3; i++) {
    if (teaTypes[i] == "Green") {continue;}
    cout << "Brewing tea " << teaTypes[i] << endl;
  }

    return 0;
}