//
//  created by sva4rd
//

//  implementation of interface.h functions

#include "interface.h"
#include <ctype.h>

// letter_in_a_sentence function calculates and return the quantities of some
// letter in a sentence

int letter_in_a_sentence(const char letter, char *str);

int letter_in_a_sentence(const char letter, char *str) {
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (toupper(letter) == toupper(str[i]))
      count++;
  }
  return count;
}

int calc_letter(const char letter, char *str1, char *str2, char *str3) {
  return letter_in_a_sentence(letter, str1) +
         letter_in_a_sentence(letter, str2) +
         letter_in_a_sentence(letter, str3);
}