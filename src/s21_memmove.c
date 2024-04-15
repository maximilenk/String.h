#include "s21_string.h"

void *s21_memmove(void *dest, const void *src, s21_size_t n) {
  unsigned char *d = (unsigned char *)dest;
  unsigned char *s = (unsigned char *)src;
  char buf[n];

  s21_memcpy(buf, s, n);
  s21_memcpy(d, buf, n);

  return dest;
}