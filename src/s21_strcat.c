#include "s21_string.h"

char *s21_strcat(char *dest, const char *src) {
  int len = s21_strlen(dest);
  int i = 0;

  while (src[i] != '\0') {
    dest[len + i] = src[i];
    i++;
  }

  dest[len + i] = '\0';
  return dest;
}
