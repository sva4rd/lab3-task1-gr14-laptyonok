//
//  created by sva4rd
//

// client file

#include "interface.h"
#include <stdio.h>

int main(int argc, char **argv) {
  if (argc != 5) {
    printf("Incorrect number of arguments!");
    return 1;
  }

  const char letter = *argv[1];
  char *str1 = argv[2];
  char *str2 = argv[3];
  char *str3 = argv[4];

  int count = calc_letter(letter, str1, str2, str3);
  printf("The total number of letter %c = %d\n", letter, count);
  return 0;
}
