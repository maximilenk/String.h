#include "s21_string.h"

typedef long unsigned s21_size_t;

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
  const unsigned char *s1, *s2;
  s1 = str1, s2 = str2;

  for (; n--; s1++, s2++) {
    if (*s1 != *s2) {
      return (*s1 - *s2);
    }
  }
  return 0;
}