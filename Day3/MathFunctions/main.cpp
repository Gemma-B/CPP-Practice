#include <iostream>
#include <vector>
#include "functions.h"
namespace MathUtilities {
  double p_n_;
  int main() {

    std::vector<int> numbers;
    double input_number_;
    double new_number_;

    std::cout << "hey, input numbers, input 666 to stop it" << std::endl;
    std::cin >> input_number_;
   
    while (input_number_ != 666) {
      numbers.push_back(input_number_);
      std::cin >> new_number_;
      new_number_ = input_number_;
    }
    std::cout << "good " << std::endl;
    Maths::Sign BOI;
    BOI.Sign(p_n_);
  return 0;
  }
};




