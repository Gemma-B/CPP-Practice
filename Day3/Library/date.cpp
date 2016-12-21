#include <iostream>
#include "date.h"
int day_;
int month_;
int year_;

Times DateCheckedOut() {
  Times output;
  std::cout << "Hey, what is the day?" << std::endl;
  std::cin >> output.day_;

  if (1 <= output.day_ && output.day_ <= 31) {
    std::cout << "Ok, what month is is? (use numbers ex. Jan = 1, Feb = 2)"
              << std::endl;
    std::cin >> output.month_;

    if (1 <= output.month_ && 12 >= output.month_) {
      std::cout << "Cool! What year is it?" << std::endl;
      std::cin >> output.year_;
      if (output.year_ >= 2016) {
        std::cout << day_ << "/" << month_ << "/" << year_ << std::endl;
      } else {
        std::cout << " its past then now..." << std::endl;
      }
    } else {
      std::cout << "That's not a real month, remember that its 1 = Jan, 2 = Feb, 3 = March" << std::endl;
    }
  } else {
    std::cout << " Sorry, that day doesn't exist " << std::endl;
  }

  return output;
};
