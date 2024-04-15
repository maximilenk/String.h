#include "s21_string.h"

char *s21_strrchr(const char *str, int c) {
  char *error = s21_NULL;
  s21_size_t i = s21_strlen(str);
  if (c != '\0') {
    for (; i > 0; i--) {
      if (str[i] == c) {
        error = (char *)&str[i];
        break;
      }
    }
  } else {
    error = (char *)&str[i];
  }
  return error;
}