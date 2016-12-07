#include <iostream>
#include <vector>
namespace NathUtilities {
  
  std::vector<int> numbers;
  double input_number_;

  std::cout << "hey, input numbers, input any letter to stop it" std::endl;
  std::cin >> input_number_;
  while (input_number_ == true) {
    numbers.push_back(input_number);
    std::cout << numbers std::endl;
  }
  //run average function

};




