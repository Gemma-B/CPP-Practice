#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include "date.h"
class Book{
 public:
  std::string checked_out_book_;
  bool checked_out_ = false;
  std::string title_;
  Times date_checked_out_;
  Times due_date_;
};
#endif // BOOK_H
