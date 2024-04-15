#include <limits.h>
#include <math.h>

#include "s21_string.h"

int flag_parcer(const char *format, s21_vse *vse, va_list factor, char *str);
int width_and_accuracy_parcer(char *c, int *num);
int s21_sprintf(char *str, const char *format, ...);
int choice_of_type(char *c, va_list factor, char *str, s21_vse *vse);
void put_zeros(s21_vse *vse);
void number_of_int(char *memory_char, int64_t factor, s21_vse *vse, int base);
void make_flags(char *memory_char, s21_vse vse);
void make_accuracy(char *memory_char, s21_vse vse);
int print_s(char *str, char *temp, s21_vse vse);
int print_c(char *str, char temp, s21_vse *vse);
void make_flags_f(char *memory_char, s21_vse *vse);

int s21_sprintf(char *str, const char *format, ...) {
  s21_vse vse = {0};
  va_list factor = {0};
  va_start(factor, format);
  flag_parcer(format, &vse, factor, str);
  return s21_strlen(str);
}

int flag_parcer(const char *format, s21_vse *vse, va_list factor, char *str) {
  char *str_begin = str;
  *str = '\0';
  for (char *c = (char *)format; *c; c++) {
    put_zeros(vse);
    int parcing_flag = 0;
    if (*c == '%') {
      c++;
      while (parcing_flag == 0) {
        switch (*c) {
          case '-': {
            vse->minus = 1;
            c++;
            break;
          }
          case '+': {
            vse->plus = 1;
            c++;
            break;
          }
          case ' ': {
            vse->probel = 1;
            c++;
            break;
          }
          case '#': {
            vse->reshetka = 1;
            c++;
            break;
          }
          case '0': {
            vse->zero = 1;
            c++;
            break;
          }
          default: {
            parcing_flag = 1;
            break;
          }
        }
      }
      int num = 0;
      if ((*c >= '0' && *c <= '9') || *c == '*') {
        vse->width_set = 1;
        if (*c == '*') {
          vse->width = va_arg(factor, int);
          c++;
        } else {
          vse->width = width_and_accuracy_parcer(c, &num);
          while (num) {
            c++;
            num--;
          }
        }
      }
      if (*c == '.') {
        vse->accuracy_set = 1;
        c++;
        if (*c >= '0' && *c <= '9') {
          vse->accuracy = width_and_accuracy_parcer(c, &num);
        }
        while (num) {
          c++;
          num--;
        }
        if (*c == '*') {
          vse->accuracy = va_arg(factor, int);
          c++;
        }
      }
      if (*c == 'l') {
        vse->len_l = 1;
        c++;
      }
      if (*c == 'h') {
        vse->len_h = 1;
        c++;
      }
      if (*c == 'L') {
        vse->len_big_l = 1;
        c++;
      }
      int plus = 0;
      if (*c != 'n') {
        plus = choice_of_type(c, factor, str, vse);
        str += plus;
      } else {
        int *d = va_arg(factor, int *);
        *d = str - str_begin;
      }
    } else {
      *str = *c;
      str++;
    }
    *str = '\0';
  }
  return 0;
}

void put_zeros(s21_vse *vse) {
  vse->minus = 0;
  vse->plus = 0;
  vse->probel = 0;
  vse->reshetka = 0;
  vse->zero = 0;
  vse->width = 0;
  vse->accuracy = 0;
  vse->len_l = 0;
  vse->len_h = 0;
  vse->len_big_l = 0;
  vse->u_flag = 0;
  vse->o_flag = 0;
  vse->x_flag = 0;
  vse->big_x_flag = 0;
  vse->accuracy_set = 0;
  vse->width_set = 0;
}

int width_and_accuracy_parcer(char *c, int *num) {
  int width = 0;
  while (*c >= '0' && *c <= '9') {
    width = width * 10 + *c - 48;
    (*num)++;
    (c)++;
  }
  return width;
}

int print_d(char *str, int64_t d, s21_vse *vse, int base) {
  char tmp[1024] = {'\0'};
  if (vse->len_h == 1) {
    d = (int16_t)d;
  } else if (vse->len_l == 0) {
    d = (int32_t)d;
  }
  char memory_char[2000] = {'\0'};
  number_of_int(memory_char, d, vse, base);
  if (!(d == 0 && vse->accuracy == 0 && vse->accuracy_set == 1)) {
    make_accuracy(memory_char, *vse);

    if (vse->plus == 1 && d >= 0) {
      tmp[0] = '+';
    } else if (d < 0) {
      tmp[0] = '-';
    } else if (vse->probel == 1) {
      tmp[0] = ' ';
    }
    s21_strcat(tmp, memory_char);
    s21_strcpy(memory_char, tmp);

    make_flags(memory_char, *vse);
    s21_strcpy(str, memory_char);
  } else if (vse->accuracy == 0 && vse->accuracy_set == 1) {
    make_accuracy(memory_char, *vse);
    make_flags(memory_char, *vse);
    for (s21_size_t i = 0; i < vse->width; i++) {
      memory_char[i] = ' ';
    }
    if (vse->width != 0) {
      s21_strcpy(str, memory_char);
    } else {
      memory_char[0] = '\0';
    }
  }
  return s21_strlen(memory_char);
}

void make_accuracy(char *memory_char, s21_vse vse) {
  char tmp[1024] = {'\0'};
  int sign = 0;
  s21_size_t length = s21_strlen(memory_char) - 1;
  if (vse.accuracy > length) {
    s21_size_t index1 = 0;
    for (s21_size_t index = 0 + sign; index < vse.accuracy - length + sign;
         index++) {
      tmp[index] = '0';
      index1 = index;
    }
    for (int i = sign; memory_char[i] != '\0'; i++) {
      tmp[index1] = memory_char[i];
      index1++;
    }
    s21_strcpy(memory_char, tmp);
  }
}

void make_flags(char *memory_char, s21_vse vse) {
  char tmp[1024] = {'\0'};
  if (vse.width > s21_strlen(memory_char)) {
    int index = vse.width - s21_strlen(memory_char);
    if (vse.minus == 0) {
      if (vse.zero == 1 &&
          ((vse.accuracy > vse.width && vse.accuracy_set == 1) ||
           vse.accuracy_set == 0)) {
        s21_memset(tmp, '0', index);
      } else {
        s21_memset(tmp, ' ', index);
      }
      s21_strcpy(tmp + index, memory_char);
    } else {
      s21_strcpy(tmp, memory_char);
      s21_memset(tmp + s21_strlen(tmp), ' ', index);
    }
    s21_strcpy(memory_char, tmp);
  }
}

void number_of_int(char *memory_str, int64_t factor, s21_vse *vse, int base) {
  int w = 0;
  int j = 0;
  if (vse->u_flag == 0 && vse->x_flag == 0 && vse->o_flag == 0 &&
      vse->big_x_flag == 0) {
    if (factor < 0) {
      factor = -factor;
      w++;
    } else if (vse->plus) {
      factor = factor;
      w++;
    }
    if (memory_str[0] == '-') {
      j++;
    }
  } else if (factor < 0) {
    w++;
    factor = -factor;
  }
  if (factor != 0 &&
      ((vse->x_flag == 1 || vse->o_flag == 1 || vse->big_x_flag == 1) &&
       vse->reshetka == 1)) {
    memory_str[0] = '0';
    w++;
    j++;
  }
  while (factor != 0) {
    memory_str[w] = (factor % base) + 48;
    factor = factor / base;
    w++;
  }
  char buffer;
  for (int i = j; i < (w + j) / 2; i++) {
    buffer = memory_str[i];
    memory_str[i] = memory_str[w - i - 1 + j];
    memory_str[w - i - 1 + j] = buffer;
  }
  if (memory_str[0] == '\0') {
    memory_str[0] = '0';
  }
}

int print_s(char *str, char *temp, s21_vse vse) {
  int index = 0;
  char temp1[1024] = {'\0'};
  for (s21_size_t d = 0; d < s21_strlen(temp); d++) {
    temp1[d] = temp[d];
  }
  if (vse.accuracy_set == 1) {
    for (s21_size_t b = vse.accuracy; b < s21_strlen(temp); b++) {
      temp1[b] = '\0';
    }
  }
  index = vse.width - s21_strlen(temp1);
  char temp2[1024] = {'\0'};
  if (vse.minus == 1) {
    for (int j = index; j > 0; j--) {
      temp1[s21_strlen(temp1)] = ' ';
    }
    s21_strcat(temp2, temp1);
  } else {
    for (int j = 0; j < index; j++) {
      temp2[j] = ' ';
    }
    s21_strcat(temp2, temp1);
  }
  if (vse.accuracy == 0 && vse.accuracy_set == 1) {
    char temp3[1024] = {'\0'};
    for (s21_size_t i = 0; i <= vse.width; i++) {
      temp3[i] = ' ';
    }
    s21_strcat(str, temp3);
  } else {
    s21_strcat(str, temp2);
  }
  return s21_strlen(temp2);
}

int print_c(char *str, char temp, s21_vse *vse) {
  s21_size_t index = 0;
  char str1[2] = {'\0'};
  char str2[2] = {'\0'};
  if (vse->zero == 1) {
    str2[0] = '0';
  } else {
    str2[0] = ' ';
  }
  str1[0] = temp;
  char temp1[1024] = {'\0'};
  if (vse->width > 1) {
    index = vse->width - 1;
  } else {
    index = 0;
  }
  if (vse->minus == 1) {
    s21_strcpy(temp1, str1);
    for (s21_size_t j = index; j > 0; j--) {
      temp1[s21_strlen(temp1)] = ' ';
    }
  } else {
    for (s21_size_t j = 0; j < index; j++) {
      temp1[j] = str2[0];
    }
    s21_strcat(temp1, str1);
  }
  if (temp == '\0' && vse->minus == 1) {
    s21_strcat(str, "\0");
    temp1[0] = '\0';
  } else {
    s21_strcat(str, temp1);
  }
  return s21_strlen(temp1);
}

int print_o(char *str, int64_t d, s21_vse *vse, int base) {
  int64_t tmp_factor = d;
  char memory_char[2000] = {'\0'};
  number_of_int(memory_char, tmp_factor, vse, base);
  char tmp[1024] = {'\0'};
  if (!(vse->accuracy_set == 1 && vse->accuracy == 0 && d == 0)) {
    make_accuracy(memory_char, *vse);
  } else {
    memory_char[0] = '\0';
  }
  if (d != 0 && vse->reshetka == 1) {
    if (vse->o_flag == 1) {
      s21_strcat(tmp, memory_char);
      s21_strcpy(memory_char, tmp);
    }
  }
  make_flags(memory_char, *vse);
  s21_strcpy(str, memory_char);
  return s21_strlen(memory_char);
}

void number_of_double(char *memory_char, long double d, s21_vse *vse) {
  int w = 0;
  if (d < 0 || vse->probel == 1 || vse->plus == 1) {
    if (d < 0) {
      d = -d;
      memory_char[0] = '-';
    } else if (vse->plus) {
      memory_char[0] = '+';
    } else if (vse->probel) {
      memory_char[0] = ' ';
    }
    w++;
  }
  double intPart, frPart = modf(d, &intPart);
  if ((vse->accuracy == 0 && vse->accuracy_set == 1) ||
      (vse->accuracy == 1 && frPart > 0.95)) {
    intPart = roundl(d);
  }
  int j = 0;
  while (intPart >= 1) {
    intPart /= 10;
    j++;
  }
  if (j == 0) j++;
  while (j > 0) {
    intPart *= 10;
    if (j == 1 && (long long int)(intPart * 10) % 10 >= 5) intPart += 1;
    memory_char[w] = (long long int)intPart % 10 + 48;

    w++;
    j--;
  }
  if (vse->accuracy != 0 || vse->reshetka == 1) {
    memory_char[w] = '.';
    w++;
  }
  for (s21_size_t k = 0; k < vse->accuracy; k++) {
    frPart *= 10;
  }
  long long number = roundl(frPart);
  if (!number) {
    for (s21_size_t i = w; i < vse->accuracy + w; i++) memory_char[i] = '0';

  } else {
    for (int i = s21_strlen(memory_char) + vse->accuracy - 1; i >= w; i--) {
      memory_char[i] = (int)(number % 10 + 0.5) + '0';
      number /= 10;
    }
  }
}

int print_f(char *str, long double d, s21_vse *vse) {
  char memory_char[2000] = {'\0'};
  number_of_double(memory_char, d, vse);
  make_flags_f(memory_char, vse);
  s21_strcpy(str, memory_char);
  return s21_strlen(memory_char);
}

int count_digits(int number) {
  int k = 0;
  if (!number) {
    k = 1;
  } else {
    while (number) {
      number /= 10;
      k++;
    }
  }
  return k;
}

void nulls_to_delete(char *memory_char, int flag) {
  char *buffer = memory_char + s21_strlen(memory_char) - 4;
  if (flag) {
    flag = 4;
  }
  for (int i = s21_strlen(memory_char) - flag - 1; i >= 0; i--) {
    if (memory_char[i] == 48)
      memory_char[i] = '\0';
    else
      break;
  }
  if (memory_char[s21_strlen(memory_char) - 1] == '.')
    memory_char[s21_strlen(memory_char) - 1] = '\0';
  if (flag) s21_strcat(memory_char, buffer);
}

int print_g(char *str, long double d, s21_vse *vse, int size) {
  int flagForAccuracy = 0;
  int flagForSmall = 0;
  char memory_char[2000] = {'\0'};
  s21_size_t digits = count_digits((int)d);
  if (d < 0.000001 && d > 0) flagForSmall = 1;
  int flag = 0;
  if (!vse->accuracy) {
    vse->accuracy = 1;
    flagForAccuracy = 1;
  }
  if (digits > vse->accuracy || flagForSmall) {
    flag = 1;
    char sign = ((int)d == 0) ? '-' : '+';
    int power = 0;
    while ((int)d >= 10 || (int)d <= -10) {
      d = d / 10;
      power++;
    }
    while ((int)d == 0) {
      d = d * 10;
      power++;
    }
    vse->accuracy--;
    number_of_double(memory_char, d, vse);
    memory_char[s21_strlen(memory_char)] = (size == 1) ? 'E' : 'e';
    memory_char[s21_strlen(memory_char)] = sign;
    if (power <= 10)
      memory_char[s21_strlen(memory_char)] = '0';
    else {
      memory_char[s21_strlen(memory_char)] = power / 10 + 48;
      power = power % 10;
    }
    memory_char[s21_strlen(memory_char)] = power + 48;
  } else {
    if (!flagForAccuracy) vse->accuracy -= digits;
    number_of_double(memory_char, d, vse);
  }
  if (!(vse->reshetka) && digits < vse->accuracy)
    nulls_to_delete(memory_char, flag);
  make_flags_f(memory_char, vse);
  s21_strcpy(str, memory_char);
  return s21_strlen(memory_char);
}

void make_flags_f(char *memory_char, s21_vse *vse) {
  char temp[1024] = {'\0'};
  for (s21_size_t i = 0; i < s21_strlen(memory_char); i++) {
    if (memory_char[i] == '.') {
      break;
    }
  }
  for (int i = 0; i < 1024; i++) {
    if (temp[i] == '\0') {
      break;
    }
    temp[i] = '\0';
  }
  if (vse->width > s21_strlen(memory_char)) {
    if (vse->minus == 0) {
      if (vse->zero == 0) {
        s21_memset(temp, ' ', vse->width - s21_strlen(memory_char));
      } else {
        s21_memset(temp, '0', vse->width - s21_strlen(memory_char));
      }
      s21_strcat(temp, memory_char);
      s21_strcpy(memory_char, temp);
    } else {
      s21_memset(temp, ' ', vse->width - s21_strlen(memory_char));
      s21_strcat(memory_char, temp);
    }
  }
}

void number_of_hex(char *memory_char, uint64_t t, s21_vse *vse, int base) {
  if (vse->len_h == 1 && base != 17) {
    t = (uint16_t)t;
  } else if (vse->len_l == 0 && base != 17) {
    t = (uint32_t)t;
  }
  if (t == 0)
    if (base == 17) {
      s21_strcpy(memory_char, "0x0");
    } else
      memory_char[0] = '0';
  else {
    if (base == 17) {
      base = 16;
    }
    int w = 0;
    int i = 0;
    char buffer[2000];
    while (t) {
      if (vse->big_x_flag)
        buffer[i] = "0123456789ABCDEF"[t % base];
      else
        buffer[i] = "0123456789abcdef"[t % base];
      t /= base;
      i++;
    }
    int j = 0;
    while (j < i) {
      memory_char[j + w] = buffer[i - j - 1];
      j++;
    }
  }
}

int print_x(char *str, uint64_t t, s21_vse *vse, int base) {
  char memory_char[2000] = {'\0'};
  char tmp[1024] = {'\0'};
  number_of_hex(memory_char, t, vse, base);
  if (!(vse->accuracy == 0 && vse->accuracy_set == 1 && t == 0)) {
    make_accuracy(memory_char, *vse);
    if (t != 0 &&
        ((vse->x_flag == 1 || vse->big_x_flag == 1) && vse->reshetka == 1)) {
      if (vse->x_flag == 1) {
        s21_strcat(tmp, "0x");
      }
      if (vse->big_x_flag == 1) {
        s21_strcat(tmp, "0X");
      }
      s21_strcat(tmp, memory_char);
      s21_strcpy(memory_char, tmp);
    }
  } else {
    memory_char[0] = '\0';
  }
  make_flags(memory_char, *vse);
  s21_strcpy(str, memory_char);
  return s21_strlen(memory_char);
}

int print_e(char *str, long double d, s21_vse *vse, int size) {
  char memory_char[2000] = {'\0'};
  char tmp[1024] = {'\0'};
  int ind = 0;
  if (vse->plus == 1) {
    tmp[0] = '+';
    ind = 1;
  } else if (d < 0) {
    tmp[0] = '-';
    ind = 1;
  } else if (vse->probel == 1) {
    tmp[0] = ' ';
    ind = 1;
  }
  s21_strcat(tmp, memory_char);
  s21_strcpy(memory_char, tmp);
  if (d == 0) {
    memory_char[ind] = '0';
    if (vse->accuracy > 1) {
      memory_char[ind + 1] = '.';
      for (s21_size_t i = 2; i < vse->accuracy + 2; i++) {
        memory_char[i] = 48;
      }
    }
    if (size == 1)
      s21_strcat(memory_char, "E+00");
    else
      s21_strcat(memory_char, "e+00");
  } else {
    char sign = ((int)d == 0) ? '-' : '+';
    int power = 0;
    while ((int)d >= 10 || (int)d <= -10) {
      d = d / 10;
      power++;
    }
    while ((int)d == 0) {
      d = d * 10;
      power++;
    }
    number_of_double(memory_char, d, vse);
    memory_char[s21_strlen(memory_char)] = (size == 1) ? 'E' : 'e';
    memory_char[s21_strlen(memory_char)] = sign;
    if (power < 10)
      memory_char[s21_strlen(memory_char)] = '0';
    else {
      memory_char[s21_strlen(memory_char)] = power / 10 + 48;
      power = power % 10;
    }
    memory_char[s21_strlen(memory_char)] = power + 48;
  }
  make_flags_f(memory_char, vse);
  s21_strcpy(str, memory_char);
  return s21_strlen(memory_char);
}

int choice_of_type(char *c, va_list factor, char *str, s21_vse *vse) {
  int move123 = 0;
  switch (*c) {
    case 'c': {
      char symb = va_arg(factor, int);
      move123 = print_c(str, symb, vse);
      if (symb == '\0') {
        move123 = vse->width;
        if (vse->width == 0) {
          move123 = 1;
        }
      }
      break;
    }
    case 'd': {
      int64_t d = va_arg(factor, int64_t);
      move123 = print_d(str, d, vse, 10);
      break;
    }
    case 'i': {
      int64_t t = va_arg(factor, int64_t);
      move123 = print_d(str, t, vse, 10);
      break;
    }
    case 'e': {
      long double a = 0;
      if (vse->len_big_l == 0)
        a = va_arg(factor, double);
      else
        a = va_arg(factor, long double);
      if (vse->accuracy_set == 0) {
        vse->accuracy = 6;
      }
      move123 = print_e(str, a, vse, 0);
      break;
    }
    case 'E': {
      long double a = 0;
      if (vse->len_big_l == 0)
        a = va_arg(factor, double);
      else
        a = va_arg(factor, long double);
      if (vse->accuracy_set == 0) {
        vse->accuracy = 6;
      }
      move123 = print_e(str, a, vse, 1);
      break;
    }
    case 'f': {
      long double a = 0;
      if (vse->len_big_l == 0)
        a = va_arg(factor, double);
      else
        a = va_arg(factor, long double);
      if (vse->accuracy_set == 0) {
        vse->accuracy = 6;
      }
      move123 = print_f(str, a, vse);
      break;
    }
    case 'g': {
      long double a = 0;
      if (vse->len_big_l == 0)
        a = va_arg(factor, double);
      else
        a = va_arg(factor, long double);
      if (vse->accuracy_set == 0) {
        vse->accuracy = 6;
      }
      move123 = print_g(str, a, vse, 0);
      break;
    }
    case 'G': {
      long double a = 0;
      if (vse->len_big_l == 0)
        a = va_arg(factor, double);
      else
        a = va_arg(factor, long double);
      if (vse->accuracy_set == 0) {
        vse->accuracy = 6;
      }
      move123 = print_g(str, a, vse, 1);
      break;
    }
    case 'o': {
      int64_t t = va_arg(factor, int64_t);
      vse->o_flag = 1;
      move123 = print_o(str, t, vse, 8);
      break;
    }
    case 's': {
      char *o = va_arg(factor, char *);
      move123 = print_s(str, o, *vse);
      break;
    }
    case 'u': {
      uint64_t x = va_arg(factor, uint64_t);
      vse->u_flag = 1;
      move123 = print_x(str, x, vse, 10);
      break;
    }
    case 'x': {
      uint64_t t = va_arg(factor, uint64_t);
      vse->x_flag = 1;
      move123 = print_x(str, t, vse, 16);
      break;
    }
    case 'X': {
      uint64_t t = va_arg(factor, uint64_t);
      vse->big_x_flag = 1;
      move123 = print_x(str, t, vse, 16);
      break;
    }
    case 'p': {
      uint64_t pntr = va_arg(factor, uint64_t);
      vse->x_flag = 1;
      vse->reshetka = 1;
      move123 = print_x(str, pntr, vse, 17);
      break;
    }
    case '%': {
      *str = '%';
      move123 = 1;
      break;
    }
  }
  c++;
  return move123;
}
