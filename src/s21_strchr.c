#include "s21_string.h"

char *s21_strchr(const char *str, int c) {
  char *error = s21_NULL;
  s21_size_t l = s21_strlen(str);
  if (c != '\0') {
    for (s21_size_t i = 0; i < l; i++) {
      if (str[i] == c) {
        error = (char *)&str[i];
        break;
      }
    }
  } else {
    error = (char *)&str[l];
  }
  return error;
}