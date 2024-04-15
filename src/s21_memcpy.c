#include "s21_string.h"

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  s21_size_t i = 0;
  unsigned char *d = (unsigned char *)dest;
  unsigned char *s = (unsigned char *)src;

  while (i != n) {
    d[i] = s[i];
    i++;
  }

  return dest;
}