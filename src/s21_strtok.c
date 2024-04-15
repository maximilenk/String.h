#include "s21_string.h"

static int s21_tok(char c, const char *tok) {
  int flag = 0;
  while (*tok != '\0') {
    if (c == *tok) flag = 1;
    tok++;
  }
  return flag;
}

char *s21_strtok(char *s, const char *tok) {
  static char *first = s21_NULL;
  char *return_str;
  if (!s) s = first;
  if (*s == '\0') {
    return_str = s21_NULL;
  } else {
    while (1) {
      if (s21_tok(*s, tok)) {
        s++;
        continue;
      }
      if (*s == '\0') s = s21_NULL;
      break;
    }
    return_str = s;
    while (s != s21_NULL) {
      if (*s == '\0') {
        first = s;
        break;
      }
      if (s21_tok(*s, tok)) {
        *s = '\0';
        first = s + 1;
        break;
      }
      s++;
    }
  }

  return (return_str);
}