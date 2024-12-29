#include <iostream>
using namespace std;

int main() {
  int teaCups;

  cout << "Enter number of tea cups: ";
  cin >> teaCups;

  // while loop
  while(teaCups > 0) {
      teaCups--;
    cout << "Serving a cup of tea \n" << teaCups << " Remaining " << endl;

    }

cout << "All tea cups are served" << endl;
    return 0;
}