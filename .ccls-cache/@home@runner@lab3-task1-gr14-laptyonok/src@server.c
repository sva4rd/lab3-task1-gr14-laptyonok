//
//  created by sva4rd
//

//  implementation of interface.h functions

#include "interface.h"

// letter_in_a_sentence function calculates and return the quantities of some
// letter in a sentence

int letter_in_a_sentence(const char letter, char *str);

int letter_in_a_sentence(const char letter, char *str) {
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == letter)
      count++;
  }
  return count;
}