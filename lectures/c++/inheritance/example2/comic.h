#ifndef _COMIC_H_
#define _COMIC_H_
#include <string>
#include "book.h"

class Comic: public Book {
  std::string hero;
 public:
  Comic(const std::string &title, const std::string &author, int numPages, const std::string &hero);
  bool isItHeavy() const;
  std::string getHero() const;
};

#endif
