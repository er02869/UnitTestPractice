#ifndef PRACTICE_H
#define PRACTICE_H

#include <string>

using std::string;

class Password
{
public:
  /*
  The function receives a string and counts how many times the same character 
  occurs at the beginning of the string, before any other characters (or the
  end of the string). The function is case-sensitive so 'Z' is different than
  'z' and any ASCII characters are allowed.
  */
  int count_leading_characters(string word);

  /*
  receives a string and returns false if it contains both at least one
  upper-case letter and at least one lower-case letter (i.e. mixed case).
  Returns true when the string is NOT mixed-case (all upper, all lower,
  or empty / non-letter characters only).
  */
  bool has_mixed_case(string);
};
#endif
