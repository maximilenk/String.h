#ifndef SRC_S21_STRING_H_
#define SRC_S21_STRING_H_

#define s21_NULL (void *)0
typedef long unsigned s21_size_t;

#include <math.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  s21_size_t minus;
  s21_size_t plus;
  s21_size_t probel;
  s21_size_t reshetka;
  s21_size_t zero;
  s21_size_t width;
  s21_size_t accuracy;
  s21_size_t len_big_l;
  s21_size_t len_l;
  s21_size_t len_h;
  s21_size_t u_flag;
  s21_size_t o_flag;
  s21_size_t x_flag;
  s21_size_t big_x_flag;
  s21_size_t width_set;
  s21_size_t accuracy_set;
  s21_size_t add_minus;
} s21_vse;

// int flag_parcer(const char *format, s21_vse *vse, va_list factor, char *str);
// int width_and_accuracy_parcer(char *c, int *num);
// int s21_sprintf(char *str, const char *format, ...);
// int choice_of_type(char *c, va_list factor, char *str, s21_vse *vse);
// void put_zeros(s21_vse *vse);
// void number_of_int(char *memory_char, int64_t factor, s21_vse *vse, int
// base); void make_flags(char *memory_char, s21_vse vse); void
// make_accuracy(char *memory_char, s21_vse vse); int print_s(char *str, char
// *temp, s21_vse vse); int print_c(char *str, char temp, s21_vse *vse); void
// make_flags_f(char *memory_char, s21_vse *vse);

// BASIC FUNCTIONS
void *s21_memchr(const void *str, int c, s21_size_t n);
int s21_memcmp(const void *str1, const void *str2, s21_size_t n);
void *s21_memcpy(void *dest, const void *src, s21_size_t n);
void *s21_memmove(void *dest, const void *src, s21_size_t n);
void *s21_memset(void *str, int c, s21_size_t n);

char *s21_strcat(char *dest, const char *src);
char *s21_strncat(char *dest, const char *src, s21_size_t n);
char *s21_strchr(const char *str, int c);
int s21_strcmp(const char *str1, const char *str2);
int s21_strncmp(const char *str1, const char *str2, s21_size_t n);

char *s21_strcpy(char *dest, const char *src);
char *s21_strncpy(char *dest, const char *src, s21_size_t n);
s21_size_t s21_strcspn(const char *str1, const char *str2);
char *s21_strerror(int errnum);
s21_size_t s21_strlen(const char *str);

char *s21_strpbrk(const char *str1, const char *str2);
char *s21_strrchr(const char *str, int c);
s21_size_t s21_strspn(const char *str1, const char *str2);
char *s21_strstr(const char *haystack, const char *needle);
char *s21_strtok(char *str, const char *delim);

// SPECIAL FUNCTIONS
void *s21_to_upper(const char *str);
void *s21_to_lower(const char *str);
void *s21_insert(const char *src, const char *str, size_t start_index);
void *s21_trim(const char *src, const char *trim_chars);

// BONUS FUNCTIONS
int s21_sprintf(char *str, const char *format, ...);
int s21_sscanf(const char *str, const char *format, ...);

#endif  // SRC_S21_STRING_H_
