#include "s21_string.h"

void *s21_to_lower(const char *str) {
  char *str2 = s21_NULL;
  if (str) {
    str2 = calloc((s21_strlen(str) + 1), sizeof(char));
    int i = 0;
    if (str2) {
      s21_strcpy(str2, str);
      while (str[i] != '\0') {
        if ((64 < str[i]) && (str[i] < 91)) {
          str2[i] = str[i] + 32;
        }
        i++;
      }
      // str2[i + 1] = '\0';  ////
    }
  }
  return str2;
}
