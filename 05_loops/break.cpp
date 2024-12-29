#include <iostream>
using namespace std;

int main() {
    string response;

    while(true) {
      cout << "Do you want more Tea? (type stop) to exit" << endl;
      getline(cin, response);

      if(response == "stop") {break;}

      cout << "Here is your another cup of Tea!" << endl;

    }
    cout << "No more tea will be served to you!!" << endl;
    return 0;
}