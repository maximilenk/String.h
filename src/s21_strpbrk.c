#include "s21_string.h"

char *s21_strpbrk(const char *str1, const char *str2) {
  char *str3 = (char *)str1;
  char *str4 = (char *)str2;
  char *error = s21_NULL;
  int flag = 0;
  while (*str3 != '\0') {
    for (long unsigned i = 0; i < s21_strlen(str4); i++) {
      if (*str3 == str4[i]) {
        error = str3;
        flag = 1;
        break;
      }
      // str4++;
    }
    str3++;
    if (flag == 1) {
      break;
    }
  }
  // printf("%c", (char)*error);
  return error;
}