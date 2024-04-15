#include "s21_string.h"

char *s21_strstr(const char *haystack, const char *needle) {
  char *strForReturn = s21_NULL;
  if (!s21_strcmp(needle, ""))
    strForReturn = (char *)haystack;
  else {
    s21_size_t length = s21_strlen(needle);
    while (*haystack != '\0') {
      if (s21_memcmp(haystack, needle, length) == 0) {
        strForReturn = (char *)haystack;
        break;
      }
      haystack++;
    }
  }
  return strForReturn;
}
