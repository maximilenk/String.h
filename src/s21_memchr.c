#include "s21_string.h"

void *s21_memchr(const void *str, int c, s21_size_t n) {
  unsigned char *str1 = (unsigned char *)str;
  unsigned char *error = s21_NULL;

  for (s21_size_t i = 0; i < n; i++) {
    if (str1[i] == c) {
      error = &str1[i];

      break;
    }
  }
  return error;
}