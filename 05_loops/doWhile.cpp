#include <iostream>
using namespace std;

int main() {
  // do while loop
  string response;
  do{
    cout << "Do you want more tea (y/n)?" << endl;
    cin >> response;
  }while(response != "n" && response != "N");

    return 0;
}