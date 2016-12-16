#include <iostream> 
#include "patrons.h"
std::string patron_name_;

void Patrons::CheckingOut() {
  
  std::cout << "what is your name?" << std::endl;
  std::cin >> patron_name_;
  
  auto find_name = std::find(std::begin(patron_list), std::end(patron_list), patron_name_);
  
  if (find_name == std::end(patron_list)){
    patron_list.push_back(patron_name_);
  }
  
  std::cout << checked_out_books_ << std::endl;
}

