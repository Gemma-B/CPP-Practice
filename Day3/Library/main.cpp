#include <iostream>
#include "book.h"
#include "date.h"
#include "library.h"
#include "patrons.h"
int main () {
  int choice;
  std::string name;
  std::string title;
  Library library; 
  std::cout << " Press 1 to check out a book, 2 to see if one is overdue and 3 for soMeTHiNG ELSE" << std::endl;
  std::cin >> choice;
  
  if (choice = 1) {
  std::cout << "what book do you want to check out?" << std::endl;
  std::cin >> title;
  std::cout << "whats your name?" << std::endl;
  std::cin >> name;
  Library l;
  l.CheckOutBook;
      //(title, library.get_patron(name));  
  }
  
  else {
    std::cout << "idk" << std::endl; 
  }
  
  //Times date = DateCheckedOut();
  return 0;
}
