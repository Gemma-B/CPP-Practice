#include <iostream>
#include "book.h"
std::string title;
bool checked_out_ = false;
Times date_checked_out = DateCheckedOut();
Times due_date_ = date_checked_out.month_ + 1;

