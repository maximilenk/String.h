#include "s21_string.h"

int s21_strncmp(const char* str1, const char* str2, s21_size_t n) {
  for (s21_size_t i = 1; *(str2) && *(str1) && *str1 == *str2 && i < n;
       str1++, str2++, i++) {
    ;
  }
  int res = *str1 - *str2;
  if (n == 0) res = 0;
  return res;
}
