#ifndef PATRONS_H
#define PATRONS_H
#include <vector>
#include "book.h"
class Patrons{ 
 public:
  std::string patron_name_;
  std::vector<Book> checked_out_books_;
};
#endif // PATRONS_H
