#include <iostream>
int DateCheckedOut(int day_, int month_, int year_) {
std::cout << "Hey, what is the day?" << std::endl;
std::cin >> day_;
if (1 <= day_ && day_ <= 31){
  std::cout << "Ok, what month is is? (use numbers ex. Jan = 1, Feb = 2)" << std::endl;
  std::cin >> month_;
  if (1<= month_ && 12 >= month_){
    std::cout << "Cool! What year is it?" << std::endl;
    std::cin >> year_;
    if ( year_ >= 2016 ){
      std::cout << "Nice! so it is " << day_ + month_ + year_ << std::endl;
    }
    else {
      std::cout << " its past then now..." << std::endl;
    }
  }
  else {
      std::cout << "That's not a real month, remember that its 1 = Jan, 2 = Feb, 3 = March" << std::endl;
  }
}
else {
  std::cout << " Sorry, that day doesn't exist " << std::endl;
}
return day_, month_, year_;
}
