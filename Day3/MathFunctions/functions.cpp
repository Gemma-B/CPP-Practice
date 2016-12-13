#include <iostream>
#include <vector>
namespace MathUtilities {
  double p_n_;
  bool negative;
  Maths::Average(){   
    std::cout << "yo" << std::endl;
  } 
  
  Maths::Sign( p_n_ ) {
    std::cin >> p_n_;
    
    if (p_n_ < 0) {
      negative = true;
      std::cout << " the number is negative" << std::endl;
    }
    
    else if (p_n_ > 0) {
      negative = false;
      std::cout << "the number is positive" << std::endl;
    }
    
    else {
      std::cout << "the number is 0" << std::endl; 
    }
  }
}
