#include <iostream>

int checkTemperature(int temperature){
  return temperature;
}

// declaration of function
void serveChai(int cups);


int main(){
  int temp = checkTemperature((5));
  std::cout << temp;
  serveChai((100));

  return 0;
}

// definition of function
void serveChai(int cups) {
  std::cout << "Serving chai" << cups << std::endl;
}