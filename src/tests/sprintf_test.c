#include "tests.h"

#define SIZE 512

START_TEST(sprintf_simple_int) {
  // printf("Hello");
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "This is a simple value %d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_negative_int) {
  // printf("Hello");
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "This is a simple value %-6.5d";
  int val = -69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_all_flags_int) {
  // printf("Hello");
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "This is a simple value %- +015.20d";
  int val = -69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_all_flags_int1) {
  // printf("Hello");
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "This is a simple value %- 25.15d";
  int val = -69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_all_flags_int2) {
  // printf("Hello");
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "This is a simple value % +025.15d";
  int val = -69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_all_flags_int3) {
  // printf("Hello");
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "This is a simple value % +025.15d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_all_flags_int4) {
  // printf("Hello");
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "This is a simple value % 015.25d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_all_flags_int5) {
  // printf("Hello");
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "This is a simple value % 025.15d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_all_flags_int6) {
  // printf("Hello");
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "This is a simple value % 25.15d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_all_flags_int7) {
  // printf("Hello");
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "This is a simple value % 15.25d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_precise_int) {
  // printf("Hello");
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%.5i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_width_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%5d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_minus_width_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%-5i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_plus_width_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%+12d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_padding_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%012i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_star_width_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%0*d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, 5, val),
                   sprintf(str2, format, 5, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_star_precision_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%0.*i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, 5, val),
                   sprintf(str2, format, 5, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_many_flags_many_ints) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char format[] = "%0.*i %d %4.*i %013d %d";
  int val = 69;
  ck_assert_int_eq(
      s21_sprintf(str1, format, 5, val, -10431, 13, 5311, 0, -581813581),
      sprintf(str2, format, 5, val, -10431, 13, 5311, 0, -581813581));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_flags_long_int) {
  // printf("AAA");
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%+5.31li";
  long int val = 698518581899;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_flags_short_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%-16.9hi";
  short int val = 6958;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_flags_another_long_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%0.*ld";
  long val = 8581385185;
  ck_assert_int_eq(s21_sprintf(str1, format, 5, val),
                   sprintf(str2, format, 5, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_zero_precision_zero_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%.0d";
  int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_space_flag_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "% d";
  int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val_width) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%15u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val_flags) {
  // printf("Hello");
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%-16u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val_precision) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%.51u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val_many_flags) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "% 5.51u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val_short) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%hu";
  unsigned short int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val_long) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%lu";
  unsigned long int val = 949149114140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val_many) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%lu, %u, %hu, %.5u, %5.u";
  unsigned long int val = 949149114140;
  ck_assert_int_eq(
      s21_sprintf(str1, format, val, 14, 1441, 14414, 9681),
      sprintf(str2, format, val, (unsigned)14, (unsigned short)1441,
              (unsigned)14414, (unsigned)9681));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_width) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%15o";
  int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_flags) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%-16o";
  int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_precision) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%.51o";
  int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_many_flags) {
  // printf("AAA");
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%-5.51o";
  int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_zero) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%o";
  ck_assert_int_eq(s21_sprintf(str1, format, 0), sprintf(str2, format, 0));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_zero_accuracy_0) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%.o";
  ck_assert_int_eq(s21_sprintf(str1, format, 0), sprintf(str2, format, 0));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_hash) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%#o";
  int val = 57175;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_hash_space) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "% #o";
  int val = 57175;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_hash_negavie_space) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "% #o";
  int val = -57175;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_short) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%hd";
  short int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_long) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%lo";
  long int val = 949149114140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_many) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%lo, %o, %ho, %.5o, %5.o";
  long int val = 949149114140;
  ck_assert_int_eq(
      s21_sprintf(str1, format, val, 14, 1441, 14414, 9681),
      sprintf(str2, format, val, (unsigned)14, (unsigned short)1441,
              (unsigned)14414, (unsigned)9681));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%lo";
  long int val = 84518;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_zero) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%u";
  ck_assert_int_eq(s21_sprintf(str1, format, 0),
                   sprintf(str2, format, (unsigned)0));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_width) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%5x";
  unsigned val = 858158158;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_flags) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%#-10x";
  unsigned val = 858158158;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_precision) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%.15x";
  unsigned val = 858158158;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_many) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%#-10x%x%X%#x%#X%5.5x";
  unsigned val = 858158158;
  ck_assert_int_eq(s21_sprintf(str1, format, val, val, val, val, val, val),
                   sprintf(str2, format, val, val, val, val, val, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_many_flags) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%#-5.10x";
  unsigned val = 858158158;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_zero) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%#x";
  unsigned val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_huge) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%#x";
  unsigned val = 18571;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_short) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%#hx";
  unsigned short val = 12352;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_long) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%#lx";
  unsigned long val = 18571757371571;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_one_longer_width) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%#2x";
  unsigned val = 1;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_two_longer_width) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%#30x";
  unsigned val = 1;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_one_char) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%0c";
  char val = 'X';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

// START_TEST(sprintf_one_char_0_flag) {
//   char str1[SIZE] = {'\0'};
//   char str2[SIZE] = {'\0'};

//   char *format = "%05.7c";
//   char val = 'X';
//   ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format,
//   val));

//   ck_assert_str_eq(str1, str2);
// }
// END_TEST

START_TEST(sprintf_one_precision) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%.5c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_one_flags) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "% -5c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_one_width) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%15c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_one_many) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%-5.3c%c%c%c%c Hello! ABOBA";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val, 'c', 'a', 'b', 'b'),
                   sprintf(str2, format, val, 'c', 'a', 'b', 'b'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_one_many_flags) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%-5.3c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_string) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%s";
  char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_string_precision) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%.15s";
  char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_string_width) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%15s";
  char *val = "69 IS MY FAVORITE NUMBER";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_string_flags) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%-15.9s";
  char *val = "69 IS MY FAVORITE NUMBER";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_string_long) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%s";
  char *val =
      "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_string_many) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%s%s%s%s";
  char *val =
      "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
  char *s1 = "";
  char *s2 = "87418347813748913749871389480913";
  char *s3 = "HAHAABOBASUCKER";
  ck_assert_int_eq(s21_sprintf(str1, format, val, s1, s2, s3),
                   sprintf(str2, format, val, s1, s2, s3));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_ptr) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%p";
  ck_assert_int_eq(s21_sprintf(str1, format, format),
                   sprintf(str2, format, format));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_ptr_width) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%15p";
  ck_assert_int_eq(s21_sprintf(str1, format, format),
                   sprintf(str2, format, format));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_ptr_precision) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%.5p";
  ck_assert_int_eq(s21_sprintf(str1, format, format),
                   sprintf(str2, format, format));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_string_width_huge) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *val = "kjafdiuhfjahfjdahf";
  char *format = "%120s";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_n_specifier) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  int ret = 0;
  char *format = "Hello, my sexy little aboba abobushka abobina %n";
  ck_assert_int_eq(s21_sprintf(str1, format, &ret),
                   sprintf(str2, format, &ret));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_precision) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%Lf";
  long double val = 513515.131513515151351;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_width) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%10Lf";
  long double val = 15.35;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_precision_zero) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%.0Lf";
  long double val = 15.35;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_precision_empty) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%.Lf";
  long double val = 15.35;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_precision_huge) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%.15Lf";
  long double val = 15.35;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_precision_huge_negative) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%.15Lf";
  long double val = -15.35581134;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_huge) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%Lf";
  long double val = 72537572375.1431341;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_flags) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "% f";
  float val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_many) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "% .0f %.lf %Lf %f %lf %Lf";
  float val = 0;
  double val1 = 0;
  long double val2 = 3515315.153151;
  float val3 = 5.5;
  double val4 = 9851.51351;
  long double val5 = 95919539159.53151351131;
  ck_assert_int_eq(s21_sprintf(str1, format, val, val1, val2, val3, val4, val5),
                   sprintf(str2, format, val, val1, val2, val3, val4, val5));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_precision_zero) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%.0Le";
  long double val = 15.35;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_precision_empty) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%.Le";
  long double val = 15.000009121;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(sprintf_e_precision_huge) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%.15Le";
  long double val = 0.000000000000000123;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_precision_huge_negative) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%.15Le";
  long double val = -15.35581134;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_huge) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%Le";
  long double val = 72537572375.1431341;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_flags) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%015E";
  float val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_width) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%15e";
  float val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_many) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "% .0e %.le %Le %e %le %Le";
  float val = 0;
  double val1 = 0;
  long double val2 = 3515315.153151;
  float val3 = 5.5;
  double val4 = 0.094913941;
  long double val5 = 95919539159.53151351131;
  ck_assert_int_eq(s21_sprintf(str1, format, val, val1, val2, val3, val4, val5),
                   sprintf(str2, format, val, val1, val2, val3, val4, val5));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_many_plus) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%+ .0e %+.le %+Le %+e %+le %+Le";
  float val = 0;
  double val1 = 0;
  long double val2 = 3515315.153151;
  float val3 = 5.5;
  double val4 = 0.094913941;
  long double val5 = 95919539159.53151351131;
  ck_assert_int_eq(s21_sprintf(str1, format, val, val1, val2, val3, val4, val5),
                   sprintf(str2, format, val, val1, val2, val3, val4, val5));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_all_empty) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_empty_format_and_parameters) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_char) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  // int k = s21_sprintf(str1, "%c", '\t');
  // int m = sprintf(str2, "%c", '\t');
  // printf("s21_sprintf: %d\n",k);
  // printf("sprintf: %d\n",m);
  ck_assert_int_eq(s21_sprintf(str1, "%c", '\t'), sprintf(str2, "%c", '\t'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_char) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'),
                   sprintf(str2, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_string) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%s", "Drop Sega PLS"),
                   sprintf(str2, "%s", "Drop Sega PLS"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_string) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(
      s21_sprintf(str1, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"),
      sprintf(str2, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_dec) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%d", 666), sprintf(str2, "%d", 666));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_dec) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%d%d%d%d", -999, 0, 666, -100),
                   sprintf(str2, "%d%d%d%d", -999, 0, 666, -100));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%i", -0), sprintf(str2, "%i", -0));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%i%i%i%i", -999, 0, 666, -100),
                   sprintf(str2, "%i%i%i%i", -999, 0, 666, -100));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_float) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  ck_assert_int_eq(s21_sprintf(str1, "%f", 0.0001),
                   sprintf(str2, "%f", 0.0001));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_float) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  ck_assert_int_eq(
      s21_sprintf(str1, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001),
      sprintf(str2, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_unsigned_dec) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  ck_assert_int_eq(s21_sprintf(str1, "%u", 100),
                   sprintf(str2, "%u", (unsigned)100));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_unsigned_dec) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%u%u%u%u", 999, 0, 666, 100),
                   sprintf(str2, "%u%u%u%u", (unsigned)999, (unsigned)0,
                           (unsigned)666, (unsigned)100));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_char_with_alignment_left) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%8c", '\t'), sprintf(str2, "%8c", '\t'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_char_with_alignment_right) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%-8c", '\t'),
                   sprintf(str2, "%-8c", '\t'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_char_with_alignment) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(
      s21_sprintf(str1, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'),
      sprintf(str2, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

// START HEX TEST
START_TEST(sprintf_test_one_hex_lower) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  ck_assert_int_eq(s21_sprintf(str1, "%x", (unsigned)INT32_MIN),
                   sprintf(str2, "%x", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%x", 0), sprintf(str2, "%x", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%x", INT32_MAX),
                   sprintf(str2, "%x", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_upper) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%X", (unsigned)INT32_MIN),
                   sprintf(str2, "%X", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%X", 0), sprintf(str2, "%x", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%X", INT32_MAX),
                   sprintf(str2, "%X", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_lower) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(
      s21_sprintf(str1, "%x%x%x%x%x", 12340987, 135, 0, -1230, -123213123),
      sprintf(str2, "%x%x%x%x%x", 12340987, 135, 0, -1230, -123213123));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_upper) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(
      s21_sprintf(str1, "%X%X%X%X%X", 12340987, 135, 0, -1230, -123213123),
      sprintf(str2, "%X%X%X%X%X", 12340987, 135, 0, -1230, -123213123));
  ck_assert_str_eq(str1, str2);
}
END_TEST
// END HEX TEST

// START HEX WITH ALIGNMENT
START_TEST(sprintf_test_one_hex_lower_with_alignment_left) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%-3x", (unsigned)INT32_MIN),
                   sprintf(str2, "%-3x", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%-3x", 0), sprintf(str2, "%-3x", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%-3x", INT32_MAX),
                   sprintf(str2, "%-3x", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_lower_with_alignment_right) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%13x", (unsigned)INT32_MIN),
                   sprintf(str2, "%13x", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%13x", 0), sprintf(str2, "%13x", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%13x", INT32_MAX),
                   sprintf(str2, "%13x", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_upper_with_alignment_left) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%-60X", INT32_MIN),
                   sprintf(str2, "%-60X", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%-60X", 0), sprintf(str2, "%-60X", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%-60X", INT32_MAX),
                   sprintf(str2, "%-60X", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_upper_with_alignment_right) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%7X", (unsigned)INT32_MIN),
                   sprintf(str2, "%7X", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%7X", 0), sprintf(str2, "%7X", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%7X", INT32_MAX),
                   sprintf(str2, "%7X", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_lower_with_alignment) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(
      s21_sprintf(str1, "%2x%-7x%9x%11x%0x", 12340987, 100, 0, 1, -666999),
      sprintf(str2, "%2x%-7x%9x%11x%0x", 12340987, 100, 0, 1, -666999));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_upper_with_alignment) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  ck_assert_int_eq(
      s21_sprintf(str1, "%2X%-7X%9X%11X%0X", 12340987, 100, 0, 1, -666999),
      sprintf(str2, "%2X%-7X%9X%11X%0X", 12340987, 100, 0, 1, -666999));
  ck_assert_str_eq(str1, str2);
}
END_TEST
// START HEX WITH ALIGNMENT

// START HEX TEST WITH #
START_TEST(sprintf_test_one_hex_with_hashtag) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%#x", INT32_MIN),
                   sprintf(str2, "%#x", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%#x", 0), sprintf(str2, "%#x", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%#x", INT32_MAX),
                   sprintf(str2, "%#x", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_upper_with_hashtag) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%#X", INT32_MIN),
                   sprintf(str2, "%#X", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%#X", 0), sprintf(str2, "%#X", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%#X", INT32_MAX),
                   sprintf(str2, "%#X", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_lower_with_hashtag_and_alignm) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(
      s21_sprintf(str1, "%#x%#x%3x%#32x%#-1x", 87, 1222224535, -13, -0,
                  123213123),
      sprintf(str2, "%#x%#x%3x%#32x%#-1x", 87, 1222224535, -13, -0, 123213123));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_upper_with_hashtag_and_alignm) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(
      s21_sprintf(str1, "%#X%#X%3X%#32X%#-1X", 87, 1222224535, -13, -0,
                  123213123),
      sprintf(str2, "%#X%#X%3X%#32X%#-1X", 87, 1222224535, -13, -0, 123213123));
  ck_assert_str_eq(str1, str2);
}
END_TEST
// END HEX TEST WITH #

// START HEX TEST with width *
START_TEST(sprintf_test_one_hex_lower_with_width_star) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%*x", 11, INT32_MIN),
                   sprintf(str2, "%*x", 11, (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);

  ck_assert_int_eq(s21_sprintf(str1, "%*x", 11, 0),
                   sprintf(str2, "%*x", 11, 0));
  ck_assert_str_eq(str1, str2);

  ck_assert_int_eq(s21_sprintf(str1, "%*x", 11, INT32_MAX),
                   sprintf(str2, "%*x", 11, INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_upper_with_width_star) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%*X", 11, INT32_MIN),
                   sprintf(str2, "%*X", 11, (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);

  ck_assert_int_eq(s21_sprintf(str1, "%*X", 11, 0),
                   sprintf(str2, "%*X", 11, 0));
  ck_assert_str_eq(str1, str2);

  ck_assert_int_eq(s21_sprintf(str1, "%*X", 11, INT32_MAX),
                   sprintf(str2, "%*X", 11, INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_lower_with_width_star_and_align_and_hashtag) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%#*x%*x%-12x%3x%*x", 9, 127312897, 0, -1,
                               199, -123978, 3, -1251),
                   sprintf(str2, "%#*x%*x%-12x%3x%*x", 9, 127312897, -0, -1,
                           199, -123978, 3, -1251));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_upper_with_width_star) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%#*X%*X%-12X%3X%*X", 9, 127312897, 0, -1,
                               199, -123978, 3, -1251),
                   sprintf(str2, "%#*X%*X%-12X%3X%*X", 9, 127312897, 0, -1, 199,
                           -123978, 3, -1251));
  ck_assert_str_eq(str1, str2);
}
END_TEST
// END HEX TEST WITH Width *

// START HEX TEST WITH precision
START_TEST(sprintf_test_one_hex_lower_with_precision) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  int a = s21_sprintf(str1, "%*.6x", 11, 0);
  int b = sprintf(str2, "%*.6x", 11, 0);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_upper_with_precision) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  int a = s21_sprintf(str1, "%*.6X", 11, INT32_MIN);
  int b = sprintf(str2, "%*.6X", 11, (unsigned)INT32_MIN);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_lower_with_precision_and_other) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  int a = s21_sprintf(
      str1, "%#3.*x%#3x%-7.*x%#-1.8x%4.3x%#2.15x%*.*x%*.1x%3x%-1x", 3, 126714,
      4444444, 0, 6423235, 0, 666, 999, 13, 5, 419, 9, 41, -41, 33);
  int b = sprintf(str2, "%#3.*x%#3x%-7.*x%#-1.8x%4.3x%#2.15x%*.*x%*.1x%3x%-1x",
                  3, 126714, 4444444, 0, 6423235, 0, 666, 999, 13, 5, 419, 9,
                  41, -41, 33);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_upper_with_precision_and_other) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(
      s21_sprintf(str1, "%#3.*X%#3x%-7.*X%#-1.8X%4.3X%#2.15x%*.*X%*.1X%3X%-1X",
                  3, -126714, 4444444, 0, 6423235, 0, 666, 999, 13, 5, -419, 9,
                  41, -41, 33),
      sprintf(str2, "%#3.*X%#3x%-7.*X%#-1.8X%4.3X%#2.15x%*.*X%*.1X%3X%-1X", 3,
              -126714, 4444444, 0, 6423235, 0, 666, 999, 13, 5, -419, 9, 41,
              -41, 33));
  ck_assert_str_eq(str1, str2);
}
END_TEST
// END HEX TEST WITH precision

// START HEX TEST WITH Length
START_TEST(sprintf_test_one_hex_lower_with_length) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%hx", -11),
                   sprintf(str2, "%hx", (unsigned short)-11));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%hx", 0),
                   sprintf(str2, "%hx", (unsigned short)0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%hx", 11),
                   sprintf(str2, "%hx", (unsigned short)11));
  ck_assert_str_eq(str1, str2);
  long unsigned int val = INT32_MAX;
  ck_assert_int_eq(s21_sprintf(str1, "%lx", val), sprintf(str2, "%lx", val));
  ck_assert_str_eq(str1, str2);
  long unsigned int v = 0;
  ck_assert_int_eq(s21_sprintf(str1, "%lx", v), sprintf(str2, "%lx", v));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_upper_with_length) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%hx", -11),
                   sprintf(str2, "%hx", (unsigned short)-11));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%hx", 0),
                   sprintf(str2, "%hx", (unsigned short)0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%hx", 11),
                   sprintf(str2, "%hx", (unsigned short)11));
  ck_assert_str_eq(str1, str2);
  long unsigned int val = INT32_MAX;
  ck_assert_int_eq(s21_sprintf(str1, "%lx", val), sprintf(str2, "%lx", val));
  ck_assert_str_eq(str1, str2);
  long unsigned int v = 0;
  ck_assert_int_eq(s21_sprintf(str1, "%lx", v), sprintf(str2, "%lx", v));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf1) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%10ld";

  ck_assert_int_eq(s21_sprintf(str1, format, 1), sprintf(str2, format, 1));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf2) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%1.1f";

  ck_assert_int_eq(s21_sprintf(str1, format, 1.1), sprintf(str2, format, 1.1));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf3) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%8.3c";

  ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf4) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%+5.5d aboba";

  int val = 10000;
  int a = s21_sprintf(str1, format, val);
  int b = sprintf(str2, format, val);
  ck_assert_int_eq(a, b);

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf6) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%7.7f";

  ck_assert_int_eq(s21_sprintf(str1, format, 11.123456),
                   sprintf(str2, format, 11.123456));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf7) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%7.4s";

  ck_assert_int_eq(s21_sprintf(str1, format, "aboba floppa"),
                   sprintf(str2, format, "aboba floppa"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf8) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%6.6u";

  ck_assert_int_eq(s21_sprintf(str1, format, 12341151),
                   sprintf(str2, format, 12341151));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf9) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%li%ld%lu";

  ck_assert_int_eq(s21_sprintf(str1, format, 666666666666, 777, 111),
                   sprintf(str2, format, 666666666666, 777, 111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf10) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%hi%hd%hu";

  ck_assert_int_eq(s21_sprintf(str1, format, 666, -777, 111),
                   sprintf(str2, format, 666, -777, 111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf11) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%+li%+lu%+d%+lf";

  ck_assert_int_eq(s21_sprintf(str1, format, -123, 321, -5555, -1213.123),
                   sprintf(str2, format, -123, 321, -5555, -1213.123));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf14) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "% 0.0li% 0.0lu% 0.0ld % 0.0lf";

  ck_assert_int_eq(s21_sprintf(str1, format, 1, 222, 33333333333, -166513.1232),
                   sprintf(str2, format, 1, 222, 33333333333, -166513.1232));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf15) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "% 0.0hi% 0.0hu% 0.0hd % 0.0hf";

  ck_assert_int_eq(s21_sprintf(str1, format, 1, 222, 33333333333, -166513.1232),
                   sprintf(str2, format, 1, 222, 33333333333, -166513.1232));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf16) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "% c";

  ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf17) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "% s";

  ck_assert_int_eq(s21_sprintf(str1, format, "aboba likes floppa"),
                   sprintf(str2, format, "aboba likes floppa"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf18) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "% s% c";

  ck_assert_int_eq(s21_sprintf(str1, format, "", 'f'),
                   sprintf(str2, format, "", 'f'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf19) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%210s";

  ck_assert_int_eq(s21_sprintf(str1, format, "AHHAHAHA\0AHHAHAHAH"),
                   sprintf(str2, format, "AHHAHAHA\0AHHAHAHAH"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf20) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%-115s";

  ck_assert_int_eq(s21_sprintf(str1, format, "Nick her"),
                   sprintf(str2, format, "Nick her"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf24) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%+2.1c%+4.2d%+5.4i%+10.2f%+55.55s%+1.1u";

  ck_assert_int_eq(
      s21_sprintf(str1, format, 'f', 21, 42, 666.666,
                  "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11),
      sprintf(str2, format, 'f', 21, 42, 666.666,
              "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf25) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%.f";

  ck_assert_int_eq(s21_sprintf(str1, format, 121.123),
                   sprintf(str2, format, 121.123));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf28) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  int n1;
  int n2;
  int a = s21_sprintf(str1, "%d%n", 123, &n1);
  int b = sprintf(str2, "%d%n", 123, &n2);

  ck_assert_int_eq(a, b);
  ck_assert_int_eq(n1, n2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf29) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%-.f";

  ck_assert_int_eq(s21_sprintf(str1, format, 111.111),
                   sprintf(str2, format, 111.111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf30) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%-.1d";

  ck_assert_int_eq(s21_sprintf(str1, format, 111), sprintf(str2, format, 111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf31) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%e";
  double x = 111;
  ck_assert_int_eq(s21_sprintf(str1, format, x), sprintf(str2, format, x));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf32) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%e%e%e%e";

  ck_assert_int_eq(s21_sprintf(str1, format, 11.111, 222.2222, 666., -555.125),
                   sprintf(str2, format, 11.111, 222.2222, 666., -555.125));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf33) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%Le";
  long double x = 122.1231;

  ck_assert_int_eq(s21_sprintf(str1, format, x), sprintf(str2, format, x));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf35) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%.10e";

  ck_assert_int_eq(s21_sprintf(str1, format, 111.184314818),
                   sprintf(str2, format, 111.184314818));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf36) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%5.3e%3.2e%lf";

  ck_assert_int_eq(s21_sprintf(str1, format, 0.000111, 111.555, 1.999),
                   sprintf(str2, format, 0.000111, 111.555, 1.999));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf37) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%E";

  ck_assert_int_eq(s21_sprintf(str1, format, 0.666666),
                   sprintf(str2, format, 0.666666));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf38) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%E%E%E";

  ck_assert_int_eq(s21_sprintf(str1, format, 0.0000999, 111.9999, 6.666),
                   sprintf(str2, format, 0.0000999, 111.9999, 6.666));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf39) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%e ABOBA %Lf %Lf %Le";
  long double c = 848181;
  long double a = 0.00000001;
  long double b = 1111111.11;
  ck_assert_int_eq(s21_sprintf(str1, format, 123.123, a, b, c),
                   sprintf(str2, format, 123.123, a, b, c));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf40) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%#e Floppa %#E%#f";

  ck_assert_int_eq(s21_sprintf(str1, format, 123.111, 0.0000999, 0.555),
                   sprintf(str2, format, 123.111, 0.0000999, 0.555));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf41) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%.Lf";
  long double a = 7.9418438184;

  ck_assert_int_eq(s21_sprintf(str1, format, a), sprintf(str2, format, a));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf42) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%#5p";
  int a = 5;
  ck_assert_int_eq(s21_sprintf(str1, format, &a), sprintf(str2, format, &a));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf43) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%.5o";

  ck_assert_int_eq(s21_sprintf(str1, format, 12345),
                   sprintf(str2, format, 12345));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf44) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%#5lX";
  long hex = 314818438141;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_trailing_zero) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%g";
  double hex = 0.50300;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_digits_more_than_accuracy) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%g";
  double hex = 59556565.50300;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_large) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%g";
  double hex = 5131.43141;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_small) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%g";
  double hex = 0.123000;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_precision) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%.5g";
  double hex = 0.123000;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_precision_zero) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%.0g";
  double hex = 0.123000;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_one_zero) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%g";
  double hex = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_zero) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%.5g";
  double hex = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

// START_TEST(sprintf_g_zero_L) {
//   char str1[SIZE] = {'\0'};
//   char str2[SIZE] = {'\0'};
//   char format[] = "%.5Lg";
//   double hex = 0;
//   ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format,
//   hex));

//   ck_assert_str_eq(str1, str2);
// }
// END_TEST

START_TEST(sprintf_g_short_no_mantiss) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%g";
  double hex = 0.005;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_G_large) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%G";
  double hex = 5131.43141;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

// START_TEST(sprintf_G_large_L) {
//   char str1[SIZE] = {'\0'};
//   char str2[SIZE] = {'\0'};
//   char format[] = "%LG";
//   double hex = 5131.43141;
//   ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format,
//   hex));

//   ck_assert_str_eq(str1, str2);
// }
// END_TEST

START_TEST(sprintf_G_small) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%G";
  double hex = 0.123000;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_G_precision) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%.5G";
  double hex = 0.123000;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_G_precision_zero) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%.0G";
  double hex = 0.123000;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_G_one_zero) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%G";
  double hex = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_G_zero) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%.5G";
  double hex = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_G_short_no_mantiss) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%G";
  double hex = 0.005;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

// #include "tests_suitcases.h"
// #include "s21_string.h"

#define BUFF_SIZE 512

START_TEST(SPRINTFTestLaslhyn22) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  sprintf(data, "|%32s|\n", "111");
  s21_sprintf(data1, "|%32s|\n", "111");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn23) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  sprintf(data, "|%32s|\n", "abc");
  s21_sprintf(data1, "|%32s|\n", "abc");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn24) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  sprintf(data, "|%-32s|\n", "abc");
  s21_sprintf(data1, "|%-32s|\n", "abc");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn25) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  sprintf(data, "|%16s|\n", "nark nark");
  s21_sprintf(data1, "|%16s|\n", "nark nark");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn26) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  sprintf(data, "|%16s|\n", "nark nark");
  s21_sprintf(data1, "|%16s|\n", "nark nark");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn27) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  int c = s21_sprintf(data, "|%.03s|\n", "hello");
  int d = sprintf(data1, "|%.03s|\n", "hello");
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn28) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  int c =
      s21_sprintf(data, "|%.3s| kushat nado |%20s|\n", "MneEEEEEEEEE", "arbuz");
  int d =
      sprintf(data1, "|%.3s| kushat nado |%20s|\n", "MneEEEEEEEEE", "arbuz");
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn31) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  int c = s21_sprintf(data, "|%-20.18u|\n", (unsigned)-345);
  int d = sprintf(data1, "|%-20.18u|\n", (unsigned)-345);
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn32) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  int c = s21_sprintf(data, "|%-20.18d|\n", -345);
  int d = sprintf(data1, "|%-20.18d|\n", -345);
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn33) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  int c = s21_sprintf(data, "|%20.2d|\n", -345);
  int d = sprintf(data1, "|%20.2d|\n", -345);
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn34) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  int c = s21_sprintf(data, "|%020d|\n", -345);
  int d = sprintf(data1, "|%020d|\n", -345);
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn35) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  int c = s21_sprintf(data, "|%%|\n");
  int d = sprintf(data1, "|%%|\n");
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn37) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  int c = s21_sprintf(data, "|test %-12i et %24s !|\n", 0, "coco");
  int d = sprintf(data1, "|test %-12i et %24s !|\n", 0, "coco");
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn38) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  int c = s21_sprintf(data, "|test %-12i et %-2.4d %24s !|\n", 0, 25, "coco");
  int d = sprintf(data1, "|test %-12i et %-2.4d %24s !|\n", 0, 25, "coco");
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn39) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%c|\n", 'a');
  sprintf(data1, "01)SPRINTF : |%c|\n", 'a');
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn40) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%-c|\n", 'z');
  sprintf(data1, "01)SPRINTF : |%-c|\n", 'z');
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn42) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%5c|\n", 'R');
  sprintf(data1, "01)SPRINTF : |%5c|\n", 'R');
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn43) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%-5c|\n", 'R');
  sprintf(data1, "01)SPRINTF : |%-5c|\n", 'R');
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn44) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%1c|\n", '3');
  sprintf(data1, "01)SPRINTF : |%1c|\n", '3');
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn45) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%c|\n", '\0');
  sprintf(data1, "01)SPRINTF : |%c|\n", '\0');
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn46) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%5c|\n", '\0');
  sprintf(data1, "01)SPRINTF : |%5c|\n", '\0');
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn47) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%-5c|\n", '\0');
  sprintf(data1, "01)SPRINTF : |%-5c|\n", '\0');
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn48) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%1c|\n", '\0');
  sprintf(data1, "01)SPRINTF : |%1c|\n", '\0');
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn49) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%s|\n", "salut");
  sprintf(data1, "01)SPRINTF : |%s|\n", "salut");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn50) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%-s|\n", "test");
  sprintf(data1, "01)SPRINTF : |%-s|\n", "test");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn52) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%10s|\n", "42");
  sprintf(data1, "01)SPRINTF : |%10s|\n", "42");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn53) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%-10s|\n", "42");
  sprintf(data1, "01)SPRINTF : |%-10s|\n", "42");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn54) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%2s|\n", "string");
  sprintf(data1, "01)SPRINTF : |%2s|\n", "string");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn55) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%-2s|\n", "string");
  sprintf(data1, "01)SPRINTF : |%-2s|\n", "string");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn56) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%.15s|\n", "precision");
  sprintf(data1, "01)SPRINTF : |%.15s|\n", "precision");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn57) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%.4s|\n", "precision");
  sprintf(data1, "01)SPRINTF : |%.4s|\n", "precision");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn58) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%.0s|\n", "precision");
  sprintf(data1, "01)SPRINTF : |%.0s|\n", "precision");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn59) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%s|\n", "\0\0\0\0\0");
  sprintf(data1, "01)SPRINTF : |%s|\n", "\0\0\0\0\0");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn60) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%10s|\n", "\0\0\0\0\0");
  sprintf(data1, "01)SPRINTF : |%10s|\n", "\0\0\0\0\0");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn61) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%s|\n", "");
  sprintf(data1, "01)SPRINTF : |%s|\n", "");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn62) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%-.2s|\n", "boom");
  sprintf(data1, "01)SPRINTF : |%-.2s|\n", "boom");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn63) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%10.8s|\n", "google");
  sprintf(data1, "01)SPRINTF : |%10.8s|\n", "google");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn64) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%10.2s|\n", "twitter");
  sprintf(data1, "01)SPRINTF : |%10.2s|\n", "twitter");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn65) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%2.10s|\n", "samsung");
  sprintf(data1, "01)SPRINTF : |%2.10s|\n", "samsung");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn66) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%2.5s|\n", "sprintf");
  sprintf(data1, "01)SPRINTF : |%2.5s|\n", "sprintf");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn67) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%-10.2s|\n", "424242424242");
  sprintf(data1, "01)SPRINTF : |%-10.2s|\n", "424242424242");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn68) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%1.0s|\n", "123456789");
  sprintf(data1, "01)SPRINTF : |%1.0s|\n", "123456789");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn69) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%-1.0s|\n", "123456789");
  sprintf(data1, "01)SPRINTF : |%-1.0s|\n", "123456789");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn70) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%.1s|\n", "covid-19");
  sprintf(data1, "01)SPRINTF : |%.1s|\n", "covid-19");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn71) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%10.2s|\n", "covid-19");
  sprintf(data1, "01)SPRINTF : |%10.2s|\n", "covid-19");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn72) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%2.5s|\n", "covid-19");
  sprintf(data1, "01)SPRINTF : |%2.5s|\n", "covid-19");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn73) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%-10.2s|\n", "covid-19");
  sprintf(data1, "01)SPRINTF : |%-10.2s|\n", "covid-19");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn74) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "01)SPRINTF : |%1.4s| et |%-6.8s| et |%4.2s|\n", "tuuu",
              "12345", "hu");
  sprintf(data1, "01)SPRINTF : |%1.4s| et |%-6.8s| et |%4.2s|\n", "tuuu",
          "12345", "hu");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn88) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF :|%1.1d|\n", -20);
  sprintf(data1, "02) standart PRINTF :|%1.1d|\n", -20);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn89) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF :|%-10d|\n", -50);
  sprintf(data1, "02) standart PRINTF :|%-10d|\n", -50);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn90) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF :|%2d|\n", -20);
  sprintf(data1, "02) standart PRINTF :|%2d|\n", -20);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn91) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF :|%.2d|\n", -20);
  sprintf(data1, "02) standart PRINTF :|%.2d|\n", -20);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn92) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF :|%d|\n", 42);
  sprintf(data1, "02) standart PRINTF :|%d|\n", 42);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn93) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF :|%i|\n", 42);
  sprintf(data1, "02) standart PRINTF :|%i|\n", 42);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn94) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF :|%-d|\n", 42);
  sprintf(data1, "02) standart PRINTF :|%-d|\n", 42);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn95) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF :|%10d|\n", 100);
  sprintf(data1, "02) standart PRINTF :|%10d|\n", 100);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn96) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF :|%-10d|\n", 100);
  sprintf(data1, "02) standart PRINTF :|%-10d|\n", 100);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn97) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF :|%.10d|\n", 100);
  sprintf(data1, "02) standart PRINTF :|%.10d|\n", 100);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn98) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF :|%10.5d|\n", 100);
  sprintf(data1, "02) standart PRINTF :|%10.5d|\n", 100);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn99) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF :|%5.10d|\n", 64);
  sprintf(data1, "02) standart PRINTF :|%5.10d|\n", 64);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn100) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF :|%1.1d|\n", 16);
  sprintf(data1, "02) standart PRINTF :|%1.1d|\n", 16);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn101) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF :|%d|\n", -42);
  sprintf(data1, "02) standart PRINTF :|%d|\n", -42);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn102) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF :|%10d|\n", -42);
  sprintf(data1, "02) standart PRINTF :|%10d|\n", -42);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn103) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF :|%.10d|\n", -42);
  sprintf(data1, "02) standart PRINTF :|%.10d|\n", -42);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn104) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF :|%10.5d|\n", -16);
  sprintf(data1, "02) standart PRINTF :|%10.5d|\n", -16);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn105) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF :|%5.10d|\n", -16);
  sprintf(data1, "02) standart PRINTF :|%5.10d|\n", -16);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn106) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%.2d|\n", -1);
  sprintf(data1, "02) standart PRINTF : |%.2d|\n", -1);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn107) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%-10d|\n", -80);
  sprintf(data1, "02) standart PRINTF : |%-10d|\n", -80);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn108) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%-.10d|\n", -80);
  sprintf(data1, "02) standart PRINTF : |%-.10d|\n", -80);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn109) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%6d|\n", 35);
  sprintf(data1, "02) standart PRINTF : |%6d|\n", 35);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn110) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%6d|\n", -35);
  sprintf(data1, "02) standart PRINTF : |%6d|\n", -35);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn111) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%5.3d|\n", 5);
  sprintf(data1, "02) standart PRINTF : |%5.3d|\n", 5);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn112) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%3.5d|\n", 5);
  sprintf(data1, "02) standart PRINTF : |%3.5d|\n", 5);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn113) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%5.3d|\n", -5);
  sprintf(data1, "02) standart PRINTF : |%5.3d|\n", -5);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn114) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%3.5d|\n", -5);
  sprintf(data1, "02) standart PRINTF : |%3.5d|\n", -5);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn115) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%.d|\n", 0);
  sprintf(data1, "02) standart PRINTF : |%.d|\n", 0);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn116) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%.d|\n", 100);
  sprintf(data1, "02) standart PRINTF : |%.d|\n", 100);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn155) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%u|\n", (unsigned)34);
  sprintf(data1, "02) standart PRINTF : |%u|\n", (unsigned)34);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn156) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%u|\n", (unsigned)-34);
  sprintf(data1, "02) standart PRINTF : |%u|\n", (unsigned)-34);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn157) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%-u|\n", (unsigned)50);
  sprintf(data1, "02) standart PRINTF : |%-u|\n", (unsigned)50);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn158) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%10u|\n", (unsigned)90);
  sprintf(data1, "02) standart PRINTF : |%10u|\n", (unsigned)90);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn159) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%.10u|\n", (unsigned)90);
  sprintf(data1, "02) standart PRINTF : |%.10u|\n", (unsigned)90);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn160) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%15u|\n", (unsigned)-100);
  sprintf(data1, "02) standart PRINTF : |%15u|\n", (unsigned)-100);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn161) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%10.5u|\n", (unsigned)52);
  sprintf(data1, "02) standart PRINTF : |%10.5u|\n", (unsigned)52);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn162) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%5.10u|\n", (unsigned)52);
  sprintf(data1, "02) standart PRINTF : |%5.10u|\n", (unsigned)52);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn163) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%20.15u|\n", (unsigned)-100000);
  sprintf(data1, "02) standart PRINTF : |%20.15u|\n", (unsigned)-100000);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn164) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%15.20u|\n", (unsigned)-100000);
  sprintf(data1, "02) standart PRINTF : |%15.20u|\n", (unsigned)-100000);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn165) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%-10u|\n", (unsigned)144);
  sprintf(data1, "02) standart PRINTF : |%-10u|\n", (unsigned)144);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn166) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%-.10u|\n", (unsigned)144);
  sprintf(data1, "02) standart PRINTF : |%-.10u|\n", (unsigned)144);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn167) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%-20u|\n", (unsigned)-20000000);
  sprintf(data1, "02) standart PRINTF : |%-20u|\n", (unsigned)-20000000);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn168) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%08u|\n", (unsigned)64);
  sprintf(data1, "02) standart PRINTF : |%08u|\n", (unsigned)64);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn169) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%3.4u|\n", (unsigned)10);
  sprintf(data1, "02) standart PRINTF : |%3.4u|\n", (unsigned)10);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn170) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF :|%u|\n", (unsigned)0);
  sprintf(data1, "02) standart PRINTF :|%u|\n", (unsigned)0);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn171) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%.u|\n", (unsigned)0);
  sprintf(data1, "02) standart PRINTF : |%.u|\n", (unsigned)0);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn172) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%10u|\n", (unsigned)0);
  sprintf(data1, "02) standart PRINTF : |%10u|\n", (unsigned)0);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn173) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%.u|\n", (unsigned)88);
  sprintf(data1, "02) standart PRINTF : |%.u|\n", (unsigned)88);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn174) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%.s|\n", "bratok");
  sprintf(data1, "02) standart PRINTF : |%.s|\n", "bratok");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn176) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%.d|\n", 5);
  sprintf(data1, "02) standart PRINTF : |%.d|\n", 5);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn177) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "02) standart PRINTF : |%.3s|\n", "21");
  sprintf(data1, "02) standart PRINTF : |%.3s|\n", "21");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn183) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%u|\n", (unsigned)-1);
  sprintf(data1, "|%u|\n", (unsigned)-1);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn184) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%u|\n", (unsigned)-1);
  sprintf(data1, "|%u|\n", (unsigned)-1);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn185) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%f|\n", 324.34);
  sprintf(data1, "|%f|\n", 324.34);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn186) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%10f|\n", 324.343);
  sprintf(data1, "|%10f|\n", 324.343);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn187) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%10.3f|\n", 324.343);
  sprintf(data1, "|%10.3f|\n", 324.343);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn188) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%1.1f|\n", 324.343);
  sprintf(data1, "|%1.1f|\n", 324.343);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn189) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%-1.10f|\n", 324.343);
  sprintf(data1, "|%-1.10f|\n", 324.343);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn190) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%-1.10f|\n", -324.343);
  sprintf(data1, "|%-1.10f|\n", -324.343);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn191) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%.10f|\n", -324.343);
  sprintf(data1, "|%.10f|\n", -324.343);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn192) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%.10f|\n", 324.343);
  sprintf(data1, "|%.10f|\n", 324.343);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn193) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|% 10f|\n", 324.1);
  sprintf(data1, "|% 10f|\n", 324.1);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn194) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%+10f|\n", 324.1);
  sprintf(data1, "|%+10f|\n", 324.1);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn195) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%10f|\n", 324.1);
  sprintf(data1, "|%10f|\n", 324.1);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn196) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%10f|\n", 324.1123132);
  sprintf(data1, "|%10f|\n", 324.1123132);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn197) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%10.15f|\n", 324.1123132);
  sprintf(data1, "|%10.15f|\n", 324.1123132);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn198) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%.0f|\n", 324.1123132);
  sprintf(data1, "|%.0f|\n", 324.1123132);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn199) {
  //
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%10.0f|\n", 3.14);
  sprintf(data1, "|%10.0f|\n", 3.14);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn200) {
  //
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%10.10f|\n", 320.3);
  sprintf(data1, "|%10.10f|\n", 320.3);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn201) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%-10.10f|\n", 320.3);
  sprintf(data1, "|%-10.10f|\n", 320.3);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn202) {
  //
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%-10.10f|\n", 320.3);
  sprintf(data1, "|%-10.10f|\n", 320.3);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn203) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%-10.10f|\n", -320.3);
  sprintf(data1, "|%-10.10f|\n", -320.3);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn204) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%.0f|\n", -320.3);
  sprintf(data1, "|%.0f|\n", -320.3);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn205) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};

  s21_sprintf(data, "|%.0f|\n", -320.3);
  sprintf(data1, "|%.0f|\n", -320.3);

  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn206) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%5.0f|\n", -320.3);
  sprintf(data1, "|%5.0f|\n", -320.3);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn207) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%5.0f|\n", 3.141592653589793);
  sprintf(data1, "|%5.0f|\n", 3.141592653589793);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn208) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%5.0f|\n", 3.141592653589793);
  sprintf(data1, "|%5.0f|\n", 3.141592653589793);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn209) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|% -5.1f|\n", 0.001);
  sprintf(data1, "|% -5.1f|\n", 0.001);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn210) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%5.1f|\n", 324.324);
  sprintf(data1, "|%5.1f|\n", 324.324);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn211) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "|%5.3f|\n", 0.0001);
  sprintf(data1, "|%5.3f|\n", 0.0001);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestdogletho1) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str,
          "Chislo:|%-5s|kust and |%9c|. This sum is |%i|. This is |%%|. And "
          "now unsigned: |%u|\n",
          "abra", 'e', 56, (unsigned)-43);
  s21_sprintf(str1,
              "Chislo:|%-5s|kust and |%9c|. This sum is |%i|. This is |%%|. "
              "And now unsigned: |%u|\n",
              "abra", 'e', 56, (unsigned)-43);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho2) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str,
          "Chislo:|%-5s|kust and |%9c|. This sum is |%i|. This is |%%|. And "
          "now unsigned: |%u|\n",
          "abra", 'e', 56, (unsigned)-43);
  s21_sprintf(str1,
              "Chislo:|%-5s|kust and |%9c|. This sum is |%i|. This is |%%|. "
              "And now unsigned: |%u|\n",
              "abra", 'e', 56, (unsigned)-43);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho6) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str, "|%i|\n", 10);
  s21_sprintf(str1, "|%i|\n", 10);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho52) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str, "|%.d|\n", 0);
  s21_sprintf(str1, "|%.d|\n", 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho53) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str, "|%5.d|\n", 0);
  s21_sprintf(str1, "|%5.d|\n", 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho54) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str, "|%5.0d|\n", 0);
  s21_sprintf(str1, "|%5.0d|\n", 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho55) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str, "|%-5.d|\n", 0);
  s21_sprintf(str1, "|%-5.d|\n", 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho56) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str, "|%.0d|\n", 0);
  s21_sprintf(str1, "|%.0d|\n", 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho68) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str, "|%20.18u|\n", (unsigned)-345);
  s21_sprintf(str1, "|%20.18u|\n", (unsigned)-345);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho69) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str, "|%-20.18u|\n", (unsigned)-345);
  s21_sprintf(str1, "|%-20.18u|\n", (unsigned)-345);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho127) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str, "|%8s|\n", "abra");
  s21_sprintf(str1, "|%8s|\n", "abra");
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho128) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str, "|%-8s|\n", "abrafdefgbr");
  s21_sprintf(str1, "|%-8s|\n", "abrafdefgbr");
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho129) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str, "|%8s|\n", "abra");
  s21_sprintf(str1, "|%8s|\n", "abra");
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho130) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str, "|%8s|\n", "abrafdefgbr");
  s21_sprintf(str1, "|%8s|\n", "abrafdefgbr");
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho131) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str, "|%8s|\n", "abra");
  s21_sprintf(str1, "|%8s|\n", "abra");
  ck_assert_str_eq(str, str1);
}

START_TEST(SPRINTFTestdogletho187) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str, "%i", 0);
  s21_sprintf(str1, "%i", 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho190) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str, "|%c|\n", 'a');
  s21_sprintf(str1, "|%c|\n", 'a');
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho197) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str, "|%c|\n", 'a');
  s21_sprintf(str1, "|%c|\n", 'a');
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho198) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str, "|%-c|\n", 'a');
  s21_sprintf(str1, "|%-c|\n", 'a');
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho232) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  for (int i = -101; i <= 101; i++) {
    sprintf(str, "%+i", i);
    s21_sprintf(str1, "%+i", i);
    ck_assert_str_eq(str, str1);
  }
}
END_TEST

START_TEST(SPRINTFTestdogletho233) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  for (int i = -101; i <= 101; i++) {
    sprintf(str, "%+d", i);
    s21_sprintf(str1, "%+d", i);
    ck_assert_str_eq(str, str1);
  }
}
END_TEST

START_TEST(SPRINTFTestdogletho234) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str, " %+d %+i %+d %+d", 2147483647, -2147483647, 21, 0);
  s21_sprintf(str1, " %+d %+i %+d %+d", 2147483647, -2147483647, 21, 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho235) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str, " %+li ", 9223372036854775807);
  s21_sprintf(str1, " %+li ", 9223372036854775807);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho236) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str, " %+ld ", 9223372036854775807);
  s21_sprintf(str1, " %+ld ", 9223372036854775807);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho237) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str, " %+-5d %+-5i", -7, 0);
  s21_sprintf(str1, " %+-5d %+-5i", -7, 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho239) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  sprintf(str, "|%u|\n", (unsigned)10);
  s21_sprintf(str1, "|%u|\n", (unsigned)10);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho259) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  for (int i = -101; i <= 101;) {
    sprintf(str, "% d", i);
    s21_sprintf(str1, "% d", i);
    i = i + 7;
    ck_assert_str_eq(str, str1);
  }
}
END_TEST

START_TEST(SPRINTFTestdogletho261) {
  char str[100] = {'\0'};
  char str1[100] = {'\0'};
  for (int i = -101; i <= 101;) {
    sprintf(str, "% -i % -d % -5d", i, i + 1, 143646235);
    s21_sprintf(str1, "% -i % -d % -5d", i, i + 1, 143646235);
    i = i + 7;
    ck_assert_str_eq(str, str1);
  }
}
END_TEST

START_TEST(SPRINTFTestdogletho282) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};

  s21_sprintf(data, "%s ", "hello world");
  sprintf(data1, "%s ", "hello world");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestdogletho283) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "%-3.1s", "\0");
  sprintf(data1, "%-3.1s", "\0");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestRleonard1) {
  char data[200] = {'\0'};
  char data1[200] = {'\0'};
  s21_sprintf(data, "%li", 100000000000000000);
  sprintf(data1, "%li", 100000000000000000);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestRleonard3) {
  char data[200] = {'\0'};
  char data1[200] = {'\0'};
  s21_sprintf(data, "%lu", (unsigned long)100000000000000000);
  sprintf(data1, "%lu", (unsigned long)100000000000000000);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestRleonard6) {
  char data[200] = {'\0'};
  char data1[200] = {'\0'};
  s21_sprintf(data, "%ld", 100000000000000000);
  sprintf(data1, "%ld", 100000000000000000);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestRleonard7) {
  char data[200] = {'\0'};
  char data1[200] = {'\0'};
  short int i = -30000;
  s21_sprintf(data, "%hi", i);
  sprintf(data1, "%hi", i);

  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestRleonard9) {
  char data[200] = {'\0'};
  char data1[200] = {'\0'};
  short int i = -30000;
  s21_sprintf(data, "%hu", (unsigned short)i);
  sprintf(data1, "%hu", (unsigned short)i);

  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestRleonard12) {
  char data[200] = {'\0'};
  char data1[200] = {'\0'};
  short int i = -30000;
  s21_sprintf(data, "%hd", i);
  sprintf(data1, "%hd", i);

  ck_assert_str_eq(data, data1);
}
END_TEST

// START_TEST(SPRINTFTestRleonard13) {
//     char data[200] = {'\0'};
//     char data1[200] = {'\0'};
//     wchar_t buf = L'c';
//     s21_sprintf(data, "%lc", buf);
//     sprintf(data1, "%lc",  buf);

//     ck_assert_str_eq(data, data1);
// } END_TEST

// START_TEST(SPRINTFTestRleonard14) {
//     char data[3000];
//     char data1[3000];
//     wchar_t buf[100] = L"hello";
//     s21_sprintf(data, "%ls", buf);
//     sprintf(data1, "%ls", buf);

//     ck_assert_str_eq(data, data1);
// } END_TEST
// ##########################################
START_TEST(s21_sprintf_test_percent) {
  char str1[1000] = {'\0'};
  char str2[1000] = {'\0'};
  int r1 = sprintf(str1, "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
  int r2 = s21_sprintf(str2, "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(simple_int) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "This is a simple value %d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(precise_int) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%.5i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(width_int) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%5d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(minus_width_int) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%-5i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(plus_width_int) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%+12d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(padding_int) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%12i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(flags_long_int) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%+5.31li";
  long int val = 698518581899;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(flags_short_int) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%-16.9hi";
  short int val = 6958;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(zero_precision_zero_int) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%.0d";
  int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(space_flag_int) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "% d";
  int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(unsigned_val) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(unsigned_val_width) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%15u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(unsigned_val_flags) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%-16u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(unsigned_val_precision) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%.51u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(unsigned_val_many_flags) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "% 5.51u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(unsigned_val_short) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%hu";
  unsigned short int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(unsigned_val_long) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%lu";
  unsigned long int val = 949149114140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(unsigned_val_many) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%lu, %u, %hu, %.5u, %5.u";
  unsigned long int val = 949149114140;
  ck_assert_int_eq(
      s21_sprintf(str1, format, val, 14, 1441, 14414, 9681),
      sprintf(str2, format, val, (unsigned)14, (unsigned short)1441,
              (unsigned)14414, (unsigned)9681));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(octal_short) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%hd";
  short int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(unsigned_zero) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%u";
  ck_assert_int_eq(s21_sprintf(str1, format, 0),
                   sprintf(str2, format, (unsigned)0));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(one_char) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%c";
  char val = 'X';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(one_precision) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%.5c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(one_flags) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "% -5c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(one_width) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%15c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(one_many) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%-5.3c%c%c%c%c Hello! ABOBA";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val, 'c', 'a', 'b', 'b'),
                   sprintf(str2, format, val, 'c', 'a', 'b', 'b'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(one_many_flags) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%-5.3c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(string) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%s";
  char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(string_precision) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%.15s";
  char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(string_width) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%15s";
  char *val = "69 IS MY FAVORITE NUMBER";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(string_flags) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%-15.9s";
  char *val = "69 IS MY FAVORITE NUMBER";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(string_long) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%s";
  char *val =
      "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(string_many) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  char *format = "%s%s%s%s";
  char *val =
      "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
  char *s1 = "";
  char *s2 = "87418347813748913749871389480913";
  char *s3 = "HAHAABOBASUCKER";
  ck_assert_int_eq(s21_sprintf(str1, format, val, s1, s2, s3),
                   sprintf(str2, format, val, s1, s2, s3));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(string_width_huge) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};
  char *val = "kjafdiuhfjahfjdahf";
  char *format = "%120s";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(float_flags) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};
  char *format = "% f";
  float val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(all_empty) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};
  ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(empty_format_and_parameters) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_char) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%c", '\t'), sprintf(str2, "%c", '\t'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_char) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'),
                   sprintf(str2, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_string) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%s", "Drop Sega PLS"),
                   sprintf(str2, "%s", "Drop Sega PLS"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_string) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  ck_assert_int_eq(
      s21_sprintf(str1, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"),
      sprintf(str2, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_dec) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%d", 666), sprintf(str2, "%d", 666));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_dec) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%d%d%d%d", -999, 0, 666, -100),
                   sprintf(str2, "%d%d%d%d", -999, 0, 666, -100));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_int) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%i", -0), sprintf(str2, "%i", -0));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_int) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%i%i%i%i", -999, 0, 666, -100),
                   sprintf(str2, "%i%i%i%i", -999, 0, 666, -100));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_float) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%f", 0.0001),
                   sprintf(str2, "%f", 0.0001));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_float) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  ck_assert_int_eq(
      s21_sprintf(str1, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001),
      sprintf(str2, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_unsigned_dec) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%u", 100),
                   sprintf(str2, "%u", (unsigned)100));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_unsigned_dec) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%u%u%u%u", 999, 0, 666, 100),
                   sprintf(str2, "%u%u%u%u", (unsigned)999, (unsigned)0,
                           (unsigned)666, (unsigned)100));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_char_with_alignment_left) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%8c", '\t'), sprintf(str2, "%8c", '\t'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_char_with_alignment_right) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%-8c", '\t'),
                   sprintf(str2, "%-8c", '\t'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_char_with_alignment) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};

  ck_assert_int_eq(
      s21_sprintf(str1, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'),
      sprintf(str2, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf1) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};
  char format[] = "%10ld";

  ck_assert_int_eq(s21_sprintf(str1, format, 1), sprintf(str2, format, 1));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf2) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};
  char format[] = "%1.1f";

  ck_assert_int_eq(s21_sprintf(str1, format, 1.1), sprintf(str2, format, 1.1));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf3) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};
  char format[] = "%8.3c";

  ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf4) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};
  char format[] = "%+5.5d aboba";

  int val = 10000;
  int a = s21_sprintf(str1, format, val);
  int b = sprintf(str2, format, val);
  ck_assert_int_eq(a, b);

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf6) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};
  char format[] = "%7.7f";

  ck_assert_int_eq(s21_sprintf(str1, format, 11.123456),
                   sprintf(str2, format, 11.123456));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf7) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};
  char format[] = "%7.4s";

  ck_assert_int_eq(s21_sprintf(str1, format, "aboba floppa"),
                   sprintf(str2, format, "aboba floppa"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf8) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};
  char format[] = "%6.6u";

  ck_assert_int_eq(s21_sprintf(str1, format, 12341151),
                   sprintf(str2, format, 12341151));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf9) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};
  char format[] = "%li%ld%lu";

  ck_assert_int_eq(s21_sprintf(str1, format, 666666666666, 777, 111),
                   sprintf(str2, format, 666666666666, 777, 111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf10) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};
  char format[] = "%hi%hd%hu";

  ck_assert_int_eq(s21_sprintf(str1, format, 666, -777, 111),
                   sprintf(str2, format, 666, -777, 111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf11) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};
  char format[] = "%+li%+lu%+d%+lf";

  ck_assert_int_eq(s21_sprintf(str1, format, -123, 321, -5555, -1213.123),
                   sprintf(str2, format, -123, 321, -5555, -1213.123));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf16) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};
  char format[] = "% c";

  ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf17) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};
  char format[] = "% s";

  ck_assert_int_eq(s21_sprintf(str1, format, "aboba likes floppa"),
                   sprintf(str2, format, "aboba likes floppa"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf18) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};
  char format[] = "% s% c";

  ck_assert_int_eq(s21_sprintf(str1, format, "", 'f'),
                   sprintf(str2, format, "", 'f'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf19) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};
  char format[] = "%210s";

  ck_assert_int_eq(s21_sprintf(str1, format, "AHHAHAHA\0AHHAHAHAH"),
                   sprintf(str2, format, "AHHAHAHA\0AHHAHAHAH"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf20) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};
  char format[] = "%-115s";

  ck_assert_int_eq(s21_sprintf(str1, format, "Nick her"),
                   sprintf(str2, format, "Nick her"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf24) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};
  char format[] = "%+2.1c%+4.2d%+5.4i%+10.2f%+55.55s%+1.1u";

  ck_assert_int_eq(
      s21_sprintf(str1, format, 'f', 21, 42, 666.666,
                  "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11),
      sprintf(str2, format, 'f', 21, 42, 666.666,
              "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf25) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};
  char format[] = "%.f";

  ck_assert_int_eq(s21_sprintf(str1, format, 121.123),
                   sprintf(str2, format, 121.123));

  ck_assert_str_eq(str1, str2);
}
END_TEST

// START_TEST(test_sprintf26) {
//   char str1[BUFF_SIZE] = {'\0'};
//   char str2[BUFF_SIZE] = {'\0'};
//   char format[] = "%%";

//   ck_assert_int_eq(s21_sprintf(str1, format), sprintf(str2, format));

//   ck_assert_str_eq(str1, str2);
// }
// END_TEST

// START_TEST(test_sprintf27) {
//   char str1[BUFF_SIZE] = {'\0'};
//   char str2[BUFF_SIZE] = {'\0'};
//   char format[] = "%%%%%%%%";

//   ck_assert_int_eq(s21_sprintf(str1, format), sprintf(str2, format));

//   ck_assert_str_eq(str1, str2);
// }
// END_TEST

START_TEST(test_sprintf29) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};
  char format[] = "%-.f";

  ck_assert_int_eq(s21_sprintf(str1, format, 111.111),
                   sprintf(str2, format, 111.111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf30) {
  char str1[BUFF_SIZE] = {'\0'};
  char str2[BUFF_SIZE] = {'\0'};
  char format[] = "%-.1d";

  ck_assert_int_eq(s21_sprintf(str1, format, 111), sprintf(str2, format, 111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

// START_TEST(wide_char) {
//     char str1[BUFF_SIZE] = {'\0'};
//     char str2[BUFF_SIZE] = {'\0'};

//     char *format = "This is a simple wide char %lc";
//     unsigned long w = L'汉';
//     int a = s21_sprintf(str1, format, w);
//     int b = sprintf(str2, format, w);
//     ck_assert_str_eq(str1, str2);
//     ck_assert_int_eq(a, b);
// }

// START_TEST(width_char) {
//     char str1[BUFF_SIZE] = {'\0'};
//     char str2[BUFF_SIZE] = {'\0'};

//     char *format = "This is a simple wide char %5c";
//     char w = 'c';
//     int a = s21_sprintf(str1, format, w);
//     int b = sprintf(str2, format, w);
//     ck_assert_str_eq(str1, str2);
//     ck_assert_int_eq(a, b);
// }
// START_TEST(minus_wide_char) {
//     char str1[BUFF_SIZE] = {'\0'};
//     char str2[BUFF_SIZE] = {'\0'};

//     char *format = "This is a simple wide char %-5lc";
//     unsigned long w = L'森';
//     int a = s21_sprintf(str1, format, w);
//     int b = sprintf(str2, format, w);
//     ck_assert_str_eq(str1, str2);
//     ck_assert_int_eq(a, b);
// } END_TEST
// START_TEST(wide_string) {
//     char str1[BUFF_SIZE] = {'\0'};
//     char str2[BUFF_SIZE] = {'\0'};

//     char *format = "This is a simple wide char %ls";
//     wchar_t w[] = L"森我爱菠萝";
//     int a = s21_sprintf(str1, format, w);
//     int b = sprintf(str2, format, w);
//     ck_assert_str_eq(str1, str2);
//     ck_assert_int_eq(a, b);
// } END_TEST

// START_TEST(wide_string1) {
//     char str1[BUFF_SIZE] = {'\0'};
//     char str2[BUFF_SIZE] = {'\0'};

//     char *format = "This is a simple wide char %5.12ls";
//     wchar_t w[] = L"森我爱菠萝";
//     int a = s21_sprintf(str1, format, w);
//     int b = sprintf(str2, format, w);
//     ck_assert_str_eq(str1, str2);
//     ck_assert_int_eq(a, b);
// } END_TEST

// START_TEST(wide_string2) {
//     char str1[BUFF_SIZE] = {'\0'};
//     char str2[BUFF_SIZE] = {'\0'};

//     char *format = "This is a simple wide char %120ls ABOBA";
//     wchar_t w[] = L"森我爱菠萝";
//     int a = s21_sprintf(str1, format, w);
//     int b = sprintf(str2, format, w);
//     ck_assert_str_eq(str1, str2);
//     ck_assert_int_eq(a, b);
// } END_TEST
// START_TEST(wide_string3) {
//     char str1[BUFF_SIZE] = {'\0'};
//     char str2[BUFF_SIZE] = {'\0'};

//     char *format = "This is a simple wide char %-43ls";
//     wchar_t w[] = L"森我爱菠萝";
//     int a = s21_sprintf(str1, format, w);
//     int b = sprintf(str2, format, w);
//     ck_assert_str_eq(str1, str2);
//     ck_assert_int_eq(a, b);
// } END_TEST

START_TEST(SPRINTF_FLOAT) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_FLOAT_PREC) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%.5f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_FLOAT_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_FLOAT_H_PREC) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5.5f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_FLOAT_MINUS) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_FLOAT_MINUS_DIGIT) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%f";
  float f = -7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_FLOAT_SPACE) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_FLOAT_PLUS_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%+5f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_FLOAT_LONG) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%.16f";
  float f = 7.891235551512512321;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_DECIMAL) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%d";
  int d = 5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_DECIMAL_PREC) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5d";
  int d = 5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

// START_TEST(SPRINTF_DECIMAL_L) {
//   char result[100] = "";
//   char result_s21[100] = "";
//   char format_str[100] = "%ld";
//   long long d = LONG_MAX;
//   sprintf(result, format_str, d);
//   s21_sprintf(result_s21, format_str, d);
//   ck_assert_str_eq(result, result_s21);
// } END_TEST

// START_TEST(SPRINTF_DECIMAL_H) {
//   char result[100] = "";
//   char result_s21[100] = "";
//   char format_str[100] = "%hd";
//   int d = INT_MAX;
//   sprintf(result, format_str, d);
//   s21_sprintf(result_s21, format_str, d);
//   ck_assert_str_eq(result, result_s21);
// } END_TEST

START_TEST(SPRINTF_DECIMAL_MINUS_DIGIT) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%d";
  int d = -5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_DECIMAL_MINUS_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5d";
  int d = -5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_DECIMAL_PLUS_DIGIT) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%+d";
  int d = 5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_DECIMAL_SPACE) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% d";
  int d = 5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_UNSIGNED) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%u";
  unsigned int u = 5;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_UNSIGNED_MINUS_DIGIT) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%u";
  unsigned int u = -5;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

// START_TEST(SPRINTF_UNSIGNED_LONG) {
//   char result[100] = "";
//   char result_s21[100] = "";
//   char format_str[100] = "%lu";
//   unsigned long int u = ULONG_MAX;
//   sprintf(result, format_str, u);
//   s21_sprintf(result_s21, format_str, u);
//   ck_assert_str_eq(result, result_s21);
// } END_TEST

// START_TEST(SPRINTF_UNSIGNED_SHORT) {
//   char result[100] = "";
//   char result_s21[100] = "";
//   char format_str[100] = "%hu";
//   unsigned long int u = USHRT_MAX;
//   sprintf(result, format_str, u);
//   s21_sprintf(result_s21, format_str, u);
//   ck_assert_str_eq(result, result_s21);
// } END_TEST

START_TEST(SPRINTF_UNSIGNED_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5u";
  unsigned int u = 5;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_UNSIGNED_MINUS_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5u";
  unsigned int u = 5;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_UNSIGNED_SPACE) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% u";
  unsigned int u = 5;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_CHAR) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%c";
  char c = 'c';
  sprintf(result, format_str, c);
  s21_sprintf(result_s21, format_str, c);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_CHAR_DIGIT) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%c";
  int c = 48;
  sprintf(result, format_str, c);
  s21_sprintf(result_s21, format_str, c);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_CHAR_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5c";
  int c = 48;
  sprintf(result, format_str, c);
  s21_sprintf(result_s21, format_str, c);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_CHAR_MINUS_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5c";
  int c = 48;
  sprintf(result, format_str, c);
  s21_sprintf(result_s21, format_str, c);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_CHAR_SPACE) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% c";
  int c = 48;
  sprintf(result, format_str, c);
  s21_sprintf(result_s21, format_str, c);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_STRING) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%s";
  char s[] = "ABOBA";
  sprintf(result, format_str, s);
  s21_sprintf(result_s21, format_str, s);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_STRING_SYMBOLS) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%s";
  char s[] = "A\nB\tO\vB\rA\0C";
  sprintf(result, format_str, s);
  s21_sprintf(result_s21, format_str, s);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_STRING_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5s";
  char s[] = "ABOBA";
  sprintf(result, format_str, s);
  s21_sprintf(result_s21, format_str, s);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_STRING_MINUS_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5s";
  char s[] = "ABOBA";
  sprintf(result, format_str, s);
  s21_sprintf(result_s21, format_str, s);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_STRING_SPACE) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% s";
  char s[] = "ABOBA";
  sprintf(result, format_str, s);
  s21_sprintf(result_s21, format_str, s);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_I_DEC) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%i";
  int i = 5;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_I_OCTAL) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_I_HEX) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%i";
  int i = 0xF;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_I_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_I_MINUS_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_I_PLUS) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%+i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_I_PLUS_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%+5i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(SPRINTF_I_SPACE) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

// START_TEST(sprintf_impossible) {
//   char str[5100] = {'\0'};
//   //    char str2[5100] = {'\0'};

//   s21_sprintf(str, "%-06d", 25);
//   ck_assert_str_eq(str, "25    ");

//   // sizes s;
//   // sizes_init(&s);
//   ck_assert(!set_size(&s, ' '));
// }
// END_TEST

START_TEST(sprintf_c_check) {
  char str[5100] = {'\0'};
  char str2[5100] = {'\0'};
  sprintf(str, "%11c %c", 'A', 'b');
  s21_sprintf(str2, "%11c %c", 'A', 'b');
  ck_assert_str_eq(str, str2);
}
END_TEST

START_TEST(sprintf_c_check1) {
  char str[5100] = {'\0'};
  char str2[5100] = {'\0'};
  sprintf(str, "%c %97c", 'n', 'j');
  s21_sprintf(str2, "%c %97c", 'n', 'j');
  ck_assert_str_eq(str, str2);
}
END_TEST

START_TEST(sprintf_c_check2) {
  char str[5100] = {'\0'};
  char str2[5100] = {'\0'};
  sprintf(str, "%-c %-3c", 'j', 'z');
  s21_sprintf(str2, "%-c %-3c", 'j', 'z');
  ck_assert_str_eq(str, str2);
}
END_TEST

START_TEST(sprintf_c_check3) {
  char str[5100] = {'\0'};
  char str2[5100] = {'\0'};
  sprintf(str, "%-c %-3c %c %c %c %c", 'j', 'z', 'z', 'z', 'z', 'z');
  s21_sprintf(str2, "%-c %-3c %c %c %c %c", 'j', 'z', 'z', 'z', 'z', 'z');
  ck_assert_str_eq(str, str2);
}
END_TEST

START_TEST(sprintf_c_check4) {
  char str[5100] = {'\0'};
  char str2[5100] = {'\0'};
  sprintf(str, "%c", 'A');
  s21_sprintf(str2, "%c", 'A');
  ck_assert_str_eq(str, str2);
}
END_TEST

START_TEST(sprintf_c_check5) {
  char str[5100] = {'\0'};
  char str2[5100] = {'\0'};
  sprintf(str, "%-c %-3c %c %c %c %c", 'j', 'z', 'z', 'z', 'z', 'z');
  s21_sprintf(str2, "%-c %-3c %c %c %c %c", 'j', 'z', 'z', 'z', 'z', 'z');
  ck_assert_str_eq(str, str2);
}
END_TEST

START_TEST(sprintf_s_check) {
  char str[100] = {'\0'};
  char str2[100] = {'\0'};
  sprintf(str, "%s", "abcde");
  s21_sprintf(str2, "%s", "abcde");
  ck_assert_str_eq(str, str2);
}
END_TEST

START_TEST(sprintf_s_check1) {
  char str[100] = {'\0'};
  char str2[100] = {'\0'};
  sprintf(str, "%.1s", "abcde");
  s21_sprintf(str2, "%.1s", "abcde");
  ck_assert_str_eq(str, str2);
}
END_TEST

START_TEST(sprintf_s_check2) {
  char str[100] = {'\0'};
  char str2[100] = {'\0'};
  sprintf(str, "%.20s", "abcde");
  s21_sprintf(str2, "%.20s", "abcde");
  ck_assert_str_eq(str, str2);
}
END_TEST

START_TEST(sprintf_s_check3) {
  char str[100] = {'\0'};
  char str2[100] = {'\0'};
  sprintf(str, "%10s", "abcde");
  s21_sprintf(str2, "%10s", "abcde");
  ck_assert_str_eq(str, str2);
}
END_TEST

START_TEST(sprintf_s_check4) {
  char str[100] = {'\0'};
  char str2[100] = {'\0'};
  sprintf(str, "%-10s", "abcde");
  s21_sprintf(str2, "%-10s", "abcde");
  ck_assert_str_eq(str, str2);
}
END_TEST

START_TEST(sprintf_u_check) {
  char str[100] = {'\0'};
  char str2[100] = {'\0'};
  sprintf(str, "%hu", (unsigned short)4);
  s21_sprintf(str2, "%hu", (unsigned short)4);
  ck_assert_str_eq(str, str2);
  sprintf(str, "%2u", (unsigned int)4);
  s21_sprintf(str2, "%2u", 4);
  ck_assert_str_eq(str, str2);
  sprintf(str, "%2.5u", (unsigned int)4);
  s21_sprintf(str2, "%2.5u", 4);
  ck_assert_str_eq(str, str2);
  sprintf(str, "%-u", (unsigned int)6);
  s21_sprintf(str2, "%-u", 6);
  ck_assert_str_eq(str, str2);
}
END_TEST

START_TEST(sprintf_d_check) {
  char str[100] = {'\0'};
  char str2[100] = {'\0'};
  sprintf(str, "%d", 0);
  s21_sprintf(str2, "%d", 0);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%d", 4);
  s21_sprintf(str2, "%d", 4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%d", -4);
  s21_sprintf(str2, "%d", -4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10.3d", 4);
  s21_sprintf(str2, "%-10.3d", 4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10.3d", -4);
  s21_sprintf(str2, "%-10.3d", -4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-3.10d", 4);
  s21_sprintf(str2, "%-3.10d", 4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-3.10d", -4);
  s21_sprintf(str2, "%-3.10d", -4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+2.2d", 4000000);
  s21_sprintf(str2, "%+2.2d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+2.2d", -4000000);
  s21_sprintf(str2, "%+2.2d", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+.2d", 4000000);
  s21_sprintf(str2, "%+.2d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+2.d", 4000000);
  s21_sprintf(str2, "%+2.d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+.2d", -4000000);
  s21_sprintf(str2, "%+.2d", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%15.15d", 4000000);
  s21_sprintf(str2, "%15.15d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%16.15d", -4000000);
  s21_sprintf(str2, "%16.15d", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%15.15d", -4000000);
  s21_sprintf(str2, "%15.15d", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%12.2d", -4000000);
  s21_sprintf(str2, "%12.2d", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%12.2d", 4000000);
  s21_sprintf(str2, "%12.2d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.12d", 4000000);
  s21_sprintf(str2, "%2.12d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.12d", -4000000);
  s21_sprintf(str2, "%2.12d", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2d", 4000000);
  s21_sprintf(str2, "%2.2d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2d", -4000000);
  s21_sprintf(str2, "%2.2d", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+2.2d", 4000000);
  s21_sprintf(str2, "%+2.2d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+2.2d", -4000000);
  s21_sprintf(str2, "%+2.2d", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%d%%\n", 4000000);
  s21_sprintf(str2, "%d%%\n", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.2d", 4000000);
  s21_sprintf(str2, "%.2d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+-2.2d", 4000000);
  s21_sprintf(str2, "%+-2.2d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+-2.2d", -4000000);
  s21_sprintf(str2, "%+-2.2d", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-15.15d", 4000000);
  s21_sprintf(str2, "%-15.15d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-15.15d", -4000000);
  s21_sprintf(str2, "%-15.15d", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-12.2d", -4000000);
  s21_sprintf(str2, "%-12.2d", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-12.2d", 4000000);
  s21_sprintf(str2, "%-12.2d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.12d", 4000000);
  s21_sprintf(str2, "%-2.12d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.12d", -4000000);
  s21_sprintf(str2, "%-2.12d", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+-2.2d", 4000000);
  s21_sprintf(str2, "%+-2.2d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+-2.2d", 4000000);
  s21_sprintf(str2, "%+-2.2d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-d%%\n", 4000000);
  s21_sprintf(str2, "%-d%%\n", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-.2d", 4000000);
  s21_sprintf(str2, "%-.2d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2d", 4000000);
  s21_sprintf(str2, "%-2d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10d", 4000000);
  s21_sprintf(str2, "%-10d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+-2d", 4000000);
  s21_sprintf(str2, "%+-2d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+-10d", 4000000);
  s21_sprintf(str2, "%+-10d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%11.10d", 4000000);
  s21_sprintf(str2, "%11.10d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "% 2.2d", 4000000);
  s21_sprintf(str2, "% 2.2d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.15d", -4000000);
  s21_sprintf(str2, "%.15d", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.15d", 4000000);
  s21_sprintf(str2, "%.15d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+.15d", 4000000);
  s21_sprintf(str2, "%+.15d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+.15d", -4000000);
  s21_sprintf(str2, "%+.15d", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%15.2d", 4000000);
  s21_sprintf(str2, "%15.2d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+15.2d", 4000000);
  s21_sprintf(str2, "%+15.2d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+15.2d", -4000000);
  s21_sprintf(str2, "%+15.2d", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%15.8d", -4000000);
  s21_sprintf(str2, "%15.8d", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-.8d", -4000000);
  s21_sprintf(str2, "%-.8d", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+.8d", 4000000);
  s21_sprintf(str2, "%+.8d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+-.8d", 4000000);
  s21_sprintf(str2, "%+-.8d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+-11d", -4000000);
  s21_sprintf(str2, "%+-11d", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+-10.8d", -4000000);
  s21_sprintf(str2, "%+-10.8d", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+-10.8d", 4000000);
  s21_sprintf(str2, "%+-10.8d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+-10.8d", -4000000);
  s21_sprintf(str2, "%+-10.8d", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+13.10d", -4000000);
  s21_sprintf(str2, "%+13.10d", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+-11.11d", 4000000);
  s21_sprintf(str2, "%+-11.11d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+-5.11d", 4000000);
  s21_sprintf(str2, "%+-5.11d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+-9.7d", 4000000);
  s21_sprintf(str2, "%+-9.7d", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%u", (unsigned int)-4000000);
  s21_sprintf(str2, "%u", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
}
END_TEST

START_TEST(sprintf_X_check) {
  char str[100] = {'\0'};
  char str2[100] = {'\0'};
  sprintf(str, "%X", 0);
  s21_sprintf(str2, "%X", 0);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%X", 4);
  s21_sprintf(str2, "%X", 4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%X", -4);
  s21_sprintf(str2, "%X", -4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10.3X", 4);
  s21_sprintf(str2, "%-10.3X", 4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10.3X", -4);
  s21_sprintf(str2, "%-10.3X", -4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-3.10X", 4);
  s21_sprintf(str2, "%-3.10X", 4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-3.10X", -4);
  s21_sprintf(str2, "%-3.10X", -4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2X", 4000000);
  s21_sprintf(str2, "%+2.2X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2X", -4000000);
  s21_sprintf(str2, "%+2.2X", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.2X", 4000000);
  s21_sprintf(str2, "%+.2X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.X", 4000000);
  s21_sprintf(str2, "%+2.X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.2X", -4000000);
  s21_sprintf(str2, "%.2X", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%15.15X", 4000000);
  s21_sprintf(str2, "%15.15X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%16.15X", -4000000);
  s21_sprintf(str2, "%16.15X", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%15.15X", -4000000);
  s21_sprintf(str2, "%15.15X", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%12.2X", -4000000);
  s21_sprintf(str2, "%12.2X", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%12.2X", 4000000);
  s21_sprintf(str2, "%12.2X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.12X", 4000000);
  s21_sprintf(str2, "%2.12X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.12X", -4000000);
  s21_sprintf(str2, "%2.12X", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2X", 4000000);
  s21_sprintf(str2, "%2.2X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2X", -4000000);
  s21_sprintf(str2, "%2.2X", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2X", 4000000);
  s21_sprintf(str2, "%2.2X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2X", -4000000);
  s21_sprintf(str2, "%2.2X", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%X%%\n", 4000000);
  s21_sprintf(str2, "%X%%\n", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.2X", 4000000);
  s21_sprintf(str2, "%.2X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.2X", 4000000);
  s21_sprintf(str2, "%-2.2X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.2X", -4000000);
  s21_sprintf(str2, "%-2.2X", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-15.15X", 4000000);
  s21_sprintf(str2, "%-15.15X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-15.15X", -4000000);
  s21_sprintf(str2, "%-15.15X", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-12.2X", -4000000);
  s21_sprintf(str2, "%-12.2X", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-12.2X", 4000000);
  s21_sprintf(str2, "%-12.2X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.12X", 4000000);
  s21_sprintf(str2, "%-2.12X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.12X", -4000000);
  s21_sprintf(str2, "%-2.12X", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.2X", 4000000);
  s21_sprintf(str2, "%-2.2X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.2X", 4000000);
  s21_sprintf(str2, "%-2.2X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-X%%\n", 4000000);
  s21_sprintf(str2, "%-X%%\n", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-.2X", 4000000);
  s21_sprintf(str2, "%-.2X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2X", 4000000);
  s21_sprintf(str2, "%-2X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10X", 4000000);
  s21_sprintf(str2, "%-10X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2X", 4000000);
  s21_sprintf(str2, "%-2X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10X", 4000000);
  s21_sprintf(str2, "%-10X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%11.10X", 4000000);
  s21_sprintf(str2, "%11.10X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2X", 4000000);
  s21_sprintf(str2, "% 2.2X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.15X", -4000000);
  s21_sprintf(str2, "%.15X", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.15X", 4000000);
  s21_sprintf(str2, "%.15X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.15X", 4000000);
  s21_sprintf(str2, "%.15X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.15X", -4000000);
  s21_sprintf(str2, "%.15X", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%15.2X", 4000000);
  s21_sprintf(str2, "%15.2X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%15.2X", -4000000);
  s21_sprintf(str2, "%15.2X", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%15.8X", -4000000);
  s21_sprintf(str2, "%15.8X", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-.8X", -4000000);
  s21_sprintf(str2, "%-.8X", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.8X", 4000000);
  s21_sprintf(str2, "%.8X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-.8X", 4000000);
  s21_sprintf(str2, "%-.8X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-11X", -4000000);
  s21_sprintf(str2, "%-11X", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-5X", -4000000);
  s21_sprintf(str2, "%-5X", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10.8X", -4000000);
  s21_sprintf(str2, "%-10.8X", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10.8X", 4000000);
  s21_sprintf(str2, "%-10.8X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10.8X", -4000000);
  s21_sprintf(str2, "%-10.8X", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%13.10X", -4000000);
  s21_sprintf(str2, "%13.10X", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-11.11X", 4000000);
  s21_sprintf(str2, "%-11.11X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-5.11X", 4000000);
  s21_sprintf(str2, "%-5.11X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-9.7X", 4000000);
  s21_sprintf(str2, "%-9.7X", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%u", (unsigned int)-4000000);
  s21_sprintf(str2, "%u", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
}
END_TEST

START_TEST(sprintf_o_check) {
  char str[100] = {'\0'};
  char str2[100] = {'\0'};
  sprintf(str, "%#o", 0);
  s21_sprintf(str2, "%#o", 0);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%o", 4);
  s21_sprintf(str2, "%o", 4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%o", -4);
  s21_sprintf(str2, "%o", -4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%#-10.3o", 4);
  s21_sprintf(str2, "%#-10.3o", 4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10.3o", -4);
  s21_sprintf(str2, "%-10.3o", -4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-3.10o", 4);
  s21_sprintf(str2, "%-3.10o", 4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-3.10o", -4);
  s21_sprintf(str2, "%-3.10o", -4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2o", 4000000);
  s21_sprintf(str2, "%2.2o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2o", -4000000);
  s21_sprintf(str2, "%2.2o", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.2o", 4000000);
  s21_sprintf(str2, "%.2o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.o", 4000000);
  s21_sprintf(str2, "%2.o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.2o", -4000000);
  s21_sprintf(str2, "%.2o", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%15.15o", 4000000);
  s21_sprintf(str2, "%15.15o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%16.15o", -4000000);
  s21_sprintf(str2, "%16.15o", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%15.15o", -4000000);
  s21_sprintf(str2, "%15.15o", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%12.2o", -4000000);
  s21_sprintf(str2, "%12.2o", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%12.2o", 4000000);
  s21_sprintf(str2, "%12.2o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.12o", 4000000);
  s21_sprintf(str2, "%2.12o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.12o", -4000000);
  s21_sprintf(str2, "%2.12o", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2o", 4000000);
  s21_sprintf(str2, "%2.2o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2o", -4000000);
  s21_sprintf(str2, "%2.2o", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2o", 4000000);
  s21_sprintf(str2, "%2.2o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2o", -4000000);
  s21_sprintf(str2, "%2.2o", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%o%%\n", 4000000);
  s21_sprintf(str2, "%o%%\n", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.2o", 4000000);
  s21_sprintf(str2, "%.2o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.2o", 4000000);
  s21_sprintf(str2, "%-2.2o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.2o", -4000000);
  s21_sprintf(str2, "%-2.2o", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-15.15o", 4000000);
  s21_sprintf(str2, "%-15.15o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-15.15o", -4000000);
  s21_sprintf(str2, "%-15.15o", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-12.2o", -4000000);
  s21_sprintf(str2, "%-12.2o", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-12.2o", 4000000);
  s21_sprintf(str2, "%-12.2o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.12o", 4000000);
  s21_sprintf(str2, "%-2.12o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.12o", -4000000);
  s21_sprintf(str2, "%-2.12o", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.2o", 4000000);
  s21_sprintf(str2, "%-2.2o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.2o", 4000000);
  s21_sprintf(str2, "%-2.2o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-o%%\n", 4000000);
  s21_sprintf(str2, "%-o%%\n", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-.2o", 4000000);
  s21_sprintf(str2, "%-.2o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2o", 4000000);
  s21_sprintf(str2, "%-2o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10o", 4000000);
  s21_sprintf(str2, "%-10o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2o", 4000000);
  s21_sprintf(str2, "%-2o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10o", 4000000);
  s21_sprintf(str2, "%-10o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%11.10o", 4000000);
  s21_sprintf(str2, "%11.10o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2o", 4000000);
  s21_sprintf(str2, "% 2.2o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.15o", -4000000);
  s21_sprintf(str2, "%.15o", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.15o", 4000000);
  s21_sprintf(str2, "%.15o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.15o", 4000000);
  s21_sprintf(str2, "%.15o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.15o", -4000000);
  s21_sprintf(str2, "%.15o", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%15.2o", 4000000);
  s21_sprintf(str2, "%15.2o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%15.2o", -4000000);
  s21_sprintf(str2, "%15.2o", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%15.8o", -4000000);
  s21_sprintf(str2, "%15.8o", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-.8o", -4000000);
  s21_sprintf(str2, "%-.8o", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.8o", 4000000);
  s21_sprintf(str2, "%.8o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-.8o", 4000000);
  s21_sprintf(str2, "%-.8o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-11o", -4000000);
  s21_sprintf(str2, "%-11o", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-5o", -4000000);
  s21_sprintf(str2, "%-5o", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10.8o", -4000000);
  s21_sprintf(str2, "%-10.8o", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10.8o", 4000000);
  s21_sprintf(str2, "%-10.8o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10.8o", -4000000);
  s21_sprintf(str2, "%-10.8o", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%13.10o", -4000000);
  s21_sprintf(str2, "%13.10o", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-11.11o", 4000000);
  s21_sprintf(str2, "%-11.11o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-5.11o", 4000000);
  s21_sprintf(str2, "%-5.11o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-9.7o", 4000000);
  s21_sprintf(str2, "%-9.7o", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%u", (unsigned int)-4000000);
  s21_sprintf(str2, "%u", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
}
END_TEST

START_TEST(sprintf_x_check) {
  char str[100] = {'\0'};
  char str2[100] = {'\0'};
  sprintf(str, "%x", 0);
  s21_sprintf(str2, "%x", 0);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%#x", 4);
  s21_sprintf(str2, "%#x", 4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%x", -4);
  s21_sprintf(str2, "%x", -4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10.3x", 4);
  s21_sprintf(str2, "%-10.3x", 4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10.3x", -4);
  s21_sprintf(str2, "%-10.3x", -4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-3.10x", 4);
  s21_sprintf(str2, "%-3.10x", 4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-3.10x", -4);
  s21_sprintf(str2, "%-3.10x", -4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2x", 4000000);
  s21_sprintf(str2, "%2.2x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2x", -4000000);
  s21_sprintf(str2, "%2.2x", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.2x", 4000000);
  s21_sprintf(str2, "%.2x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.x", 4000000);
  s21_sprintf(str2, "%2.x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.2x", -4000000);
  s21_sprintf(str2, "%.2x", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%15.15x", 4000000);
  s21_sprintf(str2, "%15.15x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%16.15x", -4000000);
  s21_sprintf(str2, "%16.15x", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%15.15x", -4000000);
  s21_sprintf(str2, "%15.15x", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%12.2x", -4000000);
  s21_sprintf(str2, "%12.2x", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%12.2x", 4000000);
  s21_sprintf(str2, "%12.2x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.12x", 4000000);
  s21_sprintf(str2, "%2.12x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.12x", -4000000);
  s21_sprintf(str2, "%2.12x", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2x", 4000000);
  s21_sprintf(str2, "%2.2x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2x", -4000000);
  s21_sprintf(str2, "%2.2x", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2x", 4000000);
  s21_sprintf(str2, "%2.2x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2x", -4000000);
  s21_sprintf(str2, "%2.2x", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%x%%\n", 4000000);
  s21_sprintf(str2, "%x%%\n", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.2x", 4000000);
  s21_sprintf(str2, "%.2x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.2x", 4000000);
  s21_sprintf(str2, "%-2.2x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.2x", -4000000);
  s21_sprintf(str2, "%-2.2x", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-15.15x", 4000000);
  s21_sprintf(str2, "%-15.15x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-15.15x", -4000000);
  s21_sprintf(str2, "%-15.15x", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-12.2x", -4000000);
  s21_sprintf(str2, "%-12.2x", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-12.2x", 4000000);
  s21_sprintf(str2, "%-12.2x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.12x", 4000000);
  s21_sprintf(str2, "%-2.12x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.12x", -4000000);
  s21_sprintf(str2, "%-2.12x", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.2x", 4000000);
  s21_sprintf(str2, "%-2.2x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.2x", 4000000);
  s21_sprintf(str2, "%-2.2x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-x%%\n", 4000000);
  s21_sprintf(str2, "%-x%%\n", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-.2x", 4000000);
  s21_sprintf(str2, "%-.2x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2x", 4000000);
  s21_sprintf(str2, "%-2x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10x", 4000000);
  s21_sprintf(str2, "%-10x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2x", 4000000);
  s21_sprintf(str2, "%-2x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10x", 4000000);
  s21_sprintf(str2, "%-10x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%11.10x", 4000000);
  s21_sprintf(str2, "%11.10x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.2x", 4000000);
  s21_sprintf(str2, "% 2.2x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.15x", -4000000);
  s21_sprintf(str2, "%.15x", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.15x", 4000000);
  s21_sprintf(str2, "%.15x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.15x", 4000000);
  s21_sprintf(str2, "%.15x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.15x", -4000000);
  s21_sprintf(str2, "%.15x", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%15.2x", 4000000);
  s21_sprintf(str2, "%15.2x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%15.2x", -4000000);
  s21_sprintf(str2, "%15.2x", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%15.8x", -4000000);
  s21_sprintf(str2, "%15.8x", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-.8x", -4000000);
  s21_sprintf(str2, "%-.8x", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.8x", 4000000);
  s21_sprintf(str2, "%.8x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-.8x", 4000000);
  s21_sprintf(str2, "%-.8x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-11x", -4000000);
  s21_sprintf(str2, "%-11x", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-5x", -4000000);
  s21_sprintf(str2, "%-5x", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10.8x", -4000000);
  s21_sprintf(str2, "%-10.8x", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10.8x", 4000000);
  s21_sprintf(str2, "%-10.8x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-10.8x", -4000000);
  s21_sprintf(str2, "%-10.8x", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%13.10x", -4000000);
  s21_sprintf(str2, "%13.10x", -4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-11.11x", 4000000);
  s21_sprintf(str2, "%-11.11x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-5.11x", 4000000);
  s21_sprintf(str2, "%-5.11x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-9.7x", 4000000);
  s21_sprintf(str2, "%-9.7x", 4000000);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%u", (unsigned int)-4000000);
  s21_sprintf(str2, "%u", -4000000);
  ck_assert_str_eq(str, str2);
}
END_TEST

START_TEST(sprintf_f_check) {
  char str[100] = {'\0'};
  char str2[100] = {'\0'};
  sprintf(str, "%.2f", 4000.1);
  s21_sprintf(str2, "%.2f", 4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.2f", -4000.1);
  s21_sprintf(str2, "%.2f", -4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%f", 4000.1);
  s21_sprintf(str2, "%f", 4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%f", -4000.1);
  s21_sprintf(str2, "%f", -4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2f", -4000.1);
  s21_sprintf(str2, "%2f", -4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2f", 4000.1);
  s21_sprintf(str2, "%2f", 4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "% 2f", 4000.1);
  s21_sprintf(str2, "% 2f", 4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%- 2f", 4000.1);
  s21_sprintf(str2, "%- 2f", 4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.0f", 4000.6);
  s21_sprintf(str2, "%.0f", 4000.6);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.0f", 0.9);
  s21_sprintf(str2, "%.0f", 0.99);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%0f", 4000.1);
  s21_sprintf(str2, "%0f", 4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%0f", -4000.1);
  s21_sprintf(str2, "%0f", -4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+f %+f", 4000.1, 30.9);
  s21_sprintf(str2, "%+f %+f", 4000.1, 30.9);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-15f", 4000.1);
  s21_sprintf(str2, "%-15f", 4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+15f", 4000.1);
  s21_sprintf(str2, "%+15f", 4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-15f", -4000.1);
  s21_sprintf(str2, "%-15f", -4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+15f", -4000.1);
  s21_sprintf(str2, "%+15f", -4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+-15f", 4000.1);
  s21_sprintf(str2, "%+-15f", 4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%+-15f", -4000.1);
  s21_sprintf(str2, "%+-15f", -4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%8.2f", 4000.1);
  s21_sprintf(str2, "%8.2f", 4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%8.2f", -4000.1);
  s21_sprintf(str2, "%8.2f", -4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.8f", 4000.1);
  s21_sprintf(str2, "%2.8f", 4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.8f", 4000.1);
  s21_sprintf(str2, "%2.8f", 4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%2.8f", -4000.1);
  s21_sprintf(str2, "%2.8f", -4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%8.8f", -4000.1);
  s21_sprintf(str2, "%8.8f", -4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%8.8f", 4000.1);
  s21_sprintf(str2, "%8.8f", 4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-8.2f", 4000.1);
  s21_sprintf(str2, "%-8.2f", 4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-8.2f", -4000.1);
  s21_sprintf(str2, "%-8.2f", -4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.8f", 4000.1);
  s21_sprintf(str2, "%-2.8f", 4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.8f", 4000.1);
  s21_sprintf(str2, "%-2.8f", 4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-2.8f", -4000.1);
  s21_sprintf(str2, "%-2.8f", -4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-8.8f", -4000.1);
  s21_sprintf(str2, "%-8.8f", -4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%-8.8f", 4000.1);
  s21_sprintf(str2, "%-8.8f", 4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%9.0f", 4000.1);
  s21_sprintf(str2, "%9.0f", 4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%9.0Lf", (long double)4000.1);
  s21_sprintf(str2, "%9.0Lf", (long double)4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%9.0Lf", (long double)-4000.1);
  s21_sprintf(str2, "%9.0Lf", (long double)-4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.1f", 5.99);
  s21_sprintf(str2, "%.1f", 5.99);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.6f", 5.99);
  s21_sprintf(str2, "%.6f", 5.99);
  ck_assert_str_eq(str, str2);
}
END_TEST

START_TEST(sprintf_i_check) {
  char str[100] = {'\0'};
  char str2[100] = {'\0'};
  sprintf(str, "%i", 4);
  s21_sprintf(str2, "%i", 4);
  ck_assert_str_eq(str, str2);
  sprintf(str, "%10i", 4);
  s21_sprintf(str2, "%10i", 4);
  ck_assert_str_eq(str, str2);
  sprintf(str, "%+-10i", 4);
  s21_sprintf(str2, "%-+10i", 4);
  ck_assert_str_eq(str, str2);
  sprintf(str, "%-10i", 4);
  s21_sprintf(str2, "%-10i", 4);
  ck_assert_str_eq(str, str2);
}
END_TEST

START_TEST(sprintf_lhidu_check) {
  char str[100] = {'\0'};
  char str2[100] = {'\0'};
  long int s = 4;
  sprintf(str, "%ld", s);
  s21_sprintf(str2, "%ld", s);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  long unsigned f = 10;
  sprintf(str, "%lu", f);
  s21_sprintf(str2, "%lu", f);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%hd", (short int)4);
  s21_sprintf(str2, "%hd", 4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%hd", (short int)4);
  s21_sprintf(str2, "%hd", 4);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
}
END_TEST

START_TEST(sprintf_e_check) {
  char str[100] = {'\0'};
  char str2[100] = {'\0'};
  sprintf(str, "%.2e", 4000.1);
  s21_sprintf(str2, "%.2e", 4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.2e", -4000.1);
  s21_sprintf(str2, "%.2e", -4000.1);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%10e", 1.0);
  s21_sprintf(str2, "%10e", 1.0);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%e", 1.123123);
  s21_sprintf(str2, "%e", 1.123123);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%e", 0.123123);
  s21_sprintf(str2, "%e", 0.123123);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%e", 0.);
  s21_sprintf(str2, "%e", 0.);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%#E", 0.0);
  s21_sprintf(str2, "%#E", 0.0);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%#.10e", 0.10000000001);
  s21_sprintf(str2, "%#.10e", 0.10000000001);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%Le", (long double)4123123123123);
  s21_sprintf(str2, "%Le", (long double)4123123123123);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%#e", 40.32);
  s21_sprintf(str2, "%#e", 40.32);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  sprintf(str, "%.6e", 5.99);
  s21_sprintf(str2, "%.6e", 5.99);
  ck_assert_str_eq(str, str2);
}
END_TEST

START_TEST(sprintf_g_check) {
  char str[100] = {'\0'};
  char str2[100] = {'\0'};
  s21_sprintf(str, "%g", 0.12345);
  sprintf(str2, "%g", 0.12345);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  s21_sprintf(str, "%g", 0.000000000000000000000003);
  sprintf(str2, "%g", 0.000000000000000000000003);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  s21_sprintf(str, "%Lg", (long double)0.000000000000000000000003);
  sprintf(str2, "%Lg", (long double)0.000000000000000000000003);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  s21_sprintf(str, "%.0Lg", (long double)0.000000000000000000000003);
  sprintf(str2, "%.0Lg", (long double)0.000000000000000000000003);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
}
END_TEST

START_TEST(sprintf_G_check) {
  char str[100] = {'\0'};
  char str2[100] = {'\0'};
  s21_sprintf(str, "%G", 0.12345);
  sprintf(str2, "%G", 0.12345);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  s21_sprintf(str, "%G", 0.000000000000000000000003);
  sprintf(str2, "%G", 0.000000000000000000000003);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  s21_sprintf(str, "%LG", (long double)0.000000000000000000000003);
  sprintf(str2, "%LG", (long double)0.000000000000000000000003);
  ck_assert_str_eq(str, str2);
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
}
END_TEST

START_TEST(sprintf_p_check) {
  char str[100] = {'\0'};
  char str2[100] = {'\0'};
  s21_sprintf(str, "%*p", 20, str);
  sprintf(str2, "%*p", 20, str);
  ck_assert_str_eq(str, str2);
}
END_TEST

// START_TEST(sprintf_n_check) {
//   char str[100] = {'\0'};
//   s21_sprintf(str, "%n");
//   ck_assert_str_eq(str, "0");
//   s21_sprintf(str, "123: %n");
//   ck_assert_str_eq(str, "123: 5");
// }
// END_TEST

START_TEST(sprintf_return_check) {
  char str[100] = {'\0'};
  char str2[100] = {'\0'};
  ck_assert_int_eq(s21_sprintf(str, "%G", 0.12345),
                   sprintf(str2, "%G", 0.12345));
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  ck_assert_int_eq(s21_sprintf(str, "%G", 0.000000000000000000000003),
                   sprintf(str2, "%G", 0.000000000000000000000003));
  for (int i = 0; i < 100; i++) {
    str[i] = '\0';
    str2[i] = '\0';
  }
  ck_assert_int_eq(
      s21_sprintf(str, "%LG", (long double)0.000000000000000000000003),
      sprintf(str2, "%LG", (long double)0.000000000000000000000003));
}
END_TEST

// START_TEST(s21_sprintf_d) {
//   char* s21_test_str = (char*)malloc(sizeof(char) * 256);
//   char* lib_test_str = (char*)malloc(sizeof(char) * 256);
//   int min = -2147483648;
//   int max = 2147483647;
//   int lib_res = sprintf(lib_test_str,
//   "|%d| |%d| |% d| |%+d| |%d| |%-5d| |%05d| |%+5d| |%5d| |%20.15d| |%+.0d|
//   |%5.15d|\n", 12, 0, 12, max, min, 12, 12, 0, -12, 12, 12, -12); int s21_res
//   = s21_sprintf(s21_test_str,
//   "|%d| |%d| |% d| |%+d| |%d| |%-5d| |%05d| |%+5d| |%5d| |%20.15d| |%+.0d|
//   |%5.15d|\n", 12, 0, 12, max, min, 12, 12, 0, -12, 12, 12, -12);
//   ck_assert_str_eq(s21_test_str, lib_test_str);
//   ck_assert_int_eq(s21_res, lib_res);
//   free(s21_test_str);
//   free(lib_test_str);
// } END_TEST

// START_TEST(s21_sprintf_i) {
//   char* s21_test_str = (char*)malloc(sizeof(char) * 256);
//   char* lib_test_str = (char*)malloc(sizeof(char) * 256);
//   int lib_res = sprintf(lib_test_str, "|%i| |% i| |%+i| |%i| |%-5i| |%5i|
//   |%+5i| |%5i|\n", 12, 12, 12, -12, 12, 12, 12, -12); int s21_res =
//   s21_sprintf(s21_test_str, "|%i| |% i| |%+i| |%i| |%-5i| |%5i| |%+5i|
//   |%5i|\n", 12, 12, 12, -12, 12, 12, 12, -12); ck_assert_str_eq(s21_test_str,
//   lib_test_str); ck_assert_int_eq(s21_res, lib_res); free(s21_test_str);
//   free(lib_test_str);
// } END_TEST

// START_TEST(s21_sprintf_star) {
//     char* s21_test_str = (char*)malloc(sizeof(char) * 256);
//     char* lib_test_str = (char*)malloc(sizeof(char) * 256);
//     int lib_res = sprintf(lib_test_str, "%.d\n", 5);
//     int s21_res = s21_sprintf(s21_test_str, "%.d\n", 5);
//     ck_assert_str_eq(s21_test_str, lib_test_str);
//     ck_assert_int_eq(s21_res, lib_res);
//     free(s21_test_str);
//     free(lib_test_str);
// } END_TEST

// START_TEST(s21_sprintf_u) {
//     char* s21_test_str = (char*)malloc(sizeof(char) * 256);
//     char* lib_test_str = (char*)malloc(sizeof(char) * 256);
//     unsigned int u = 2147483647;
//     unsigned int a = 0;
//     unsigned int b = 102;
//     unsigned int c = 12;
//     unsigned int d = 120;
//     unsigned int e = 1200;
//     unsigned int f = 14895085;
//     int lib_res = sprintf(lib_test_str,
//     "|%u| |%u| |%u| |%-20u| |%u| |%07u| |%5u| |%.20u| |%-20.15u| |%u|\n",
//     u, a, b, c, f, c, c, c, d, e);
//     int s21_res = s21_sprintf(s21_test_str,
//     "|%u| |%u| |%u| |%-20u| |%u| |%07u| |%5u| |%.20u| |%-20.15u| |%u|\n",
//     u, a, b, c, f, c, c, c, d, e);
//     ck_assert_str_eq(s21_test_str, lib_test_str);
//     ck_assert_int_eq(s21_res, lib_res);
//     free(s21_test_str);
//     free(lib_test_str);
// } END_TEST

// START_TEST(s21_sprintf_f) {
//   char* s21_test_str = (char*)malloc(sizeof(char) * 256);
//   char* lib_test_str = (char*)malloc(sizeof(char) * 256);
//   int lib_res = sprintf(lib_test_str, "|%f| |% f| |%+f| |%f| |%-8f| |%8f|
//   |%+8f| |%8f|\n", 0.020, 0.020, 0.020, -0.020, 0.020, 0.020, 0.020, -0.020);
//   int s21_res = s21_sprintf(s21_test_str, "|%f| |% f| |%+f| |%f| |%-8f| |%8f|
//   |%+8f| |%8f|\n", 0.020, 0.020, 0.020, -0.020, 0.020, 0.020, 0.020, -0.020);
//   ck_assert_str_eq(s21_test_str, lib_test_str);
//   ck_assert_int_eq(s21_res, lib_res);
//   free(s21_test_str);
//   free(lib_test_str);
// } END_TEST

// START_TEST(s21_sprintf_s) {
//   char* s21_test_str = (char*)malloc(sizeof(char) * 256);
//   char* lib_test_str = (char*)malloc(sizeof(char) * 256);
//   int lib_res = sprintf(lib_test_str, "|%20s| |%-20s| |%5.0s| |%.1s|\n",
//   "Hi", "My", "Hi", "My");
//   int s21_res = s21_sprintf(s21_test_str, "|%20s| |%-20s| |%5.0s| |%.1s|\n",
//   "Hi", "My", "Hi", "My");
//   ck_assert_str_eq(s21_test_str, lib_test_str);
//   ck_assert_int_eq(s21_res, lib_res);
//   free(s21_test_str);
//   free(lib_test_str);
// } END_TEST

// START_TEST(s21_sprintf_h) {
//     char* s21_test_str = (char*)malloc(sizeof(char) * 256);
//     char* lib_test_str = (char*)malloc(sizeof(char) * 256);
//     short i = 0;
//     short a = 32767;
//     int lib_res = sprintf(lib_test_str, "|%hi| |%hd| |%hu|", i, a, (unsigned
//     short)i); int s21_res = s21_sprintf(s21_test_str, "|%hi| |%hd| |%hu|", i,
//     a, (unsigned short)i); ck_assert_str_eq(s21_test_str, lib_test_str);
//     ck_assert_int_eq(s21_res, lib_res);
//     free(s21_test_str);
//     free(lib_test_str);
// } END_TEST

// // START_TEST(s21_sprintf_l) {
// //     char* s21_test_str = (char*)malloc(sizeof(char) * 256);
// //     char* lib_test_str = (char*)malloc(sizeof(char) * 256);
// //     long i = LONG_MAX;
// //     long a = LONG_MIN;
// //     unsigned long b = 4294967295;
// //     int lib_res = sprintf(lib_test_str, "|%li| |%ld| |%lu|", i, a, b);
// //     int s21_res = s21_sprintf(s21_test_str, "|%li| |%ld| |%lu|", i, a, b);
// //     ck_assert_str_eq(s21_test_str, lib_test_str);
// //     ck_assert_int_eq(s21_res, lib_res);
// //     free(s21_test_str);
// //     free(lib_test_str);
// // } END_TEST

// START_TEST(s21_sprintf_diu_whith_str) {
//     char* s21_test_str = (char*)malloc(sizeof(char) * 256);
//     char* lib_test_str = (char*)malloc(sizeof(char) * 256);
//     long number = 100000000;
//     short number1 = 5;
//     int lib_res = sprintf(lib_test_str,
//     "%d Hello, %10u it's a great % hd, %-10i, %d, %+10d, %ld\n", 0,
//     (unsigned)1, number1, 3, -4, 5, number); int s21_res =
//     s21_sprintf(s21_test_str,
//     "%d Hello, %10u it's a great % hd, %-10i, %d, %+10d, %ld\n", 0,
//     (unsigned)1, number1, 3, -4, 5, number); ck_assert_str_eq(s21_test_str,
//     lib_test_str); ck_assert_int_eq(s21_res, lib_res); free(s21_test_str);
//     free(lib_test_str);
// } END_TEST

// START_TEST(s21_sprintf_cs) {
//   char* s21_test_str = (char*)malloc(sizeof(char) * 256);
//   char* lib_test_str = (char*)malloc(sizeof(char) * 256);
//   char* str0 = "User";
//   char* str1 = "";
//   int lib_res = sprintf(lib_test_str, "Hello, %-13s, i%c, %s a great day!",
//   str0, 't', str1); int s21_res = s21_sprintf(s21_test_str, "Hello, %-13s,
//   i%c, %s a great day!", str0, 't', str1); ck_assert_str_eq(s21_test_str,
//   lib_test_str); ck_assert_int_eq(s21_res, lib_res); free(s21_test_str);
//   free(lib_test_str);
// } END_TEST

// START_TEST(s21_sprintf_f_with_str) {
//   char* s21_test_str = (char*)malloc(sizeof(char) * 512);
//   char* lib_test_str = (char*)malloc(sizeof(char) * 512);
//   int lib_res = sprintf(lib_test_str, "Hello%.10f, my %.2f, beautiful
//   %+10.f,world %-5.3f", 0.2, 0.12345, 0.3, -0.23246); int s21_res =
//   s21_sprintf(s21_test_str, "Hello%.10f, my %.2f, beautiful %+10.f,world
//   %-5.3f", 0.2, 0.12345, 0.3, -0.23246); ck_assert_str_eq(s21_test_str,
//   lib_test_str); ck_assert_int_eq(s21_res, lib_res); free(s21_test_str);
//   free(lib_test_str);
// } END_TEST

// START_TEST(s21_sprintf_empty) {
//   char* s21_test_str = (char*)malloc(sizeof(char) * 512);
//   char* lib_test_str = (char*)malloc(sizeof(char) * 512);
//   int lib_res = sprintf(lib_test_str, "%c", '\0');
//   int s21_res = s21_sprintf(s21_test_str, "%c", '\0');
//   ck_assert_str_eq(s21_test_str, lib_test_str);
//   ck_assert_int_eq(s21_res, lib_res);
//   free(s21_test_str);
//   free(lib_test_str);
// } END_TEST

Suite *suite_sprintf(void) {
  Suite *s = suite_create("suite_sprintf");
  TCase *tc = tcase_create("sprintf_tc");
  suite_add_tcase(s, tc);
  // tcase_add_test(tc, sprintf_impossible);
  tcase_add_test(tc, sprintf_c_check);
  tcase_add_test(tc, sprintf_c_check1);
  tcase_add_test(tc, sprintf_c_check2);
  tcase_add_test(tc, sprintf_c_check3);
  tcase_add_test(tc, sprintf_c_check4);
  tcase_add_test(tc, sprintf_c_check5);
  tcase_add_test(tc, sprintf_s_check);
  tcase_add_test(tc, sprintf_s_check1);
  tcase_add_test(tc, sprintf_s_check2);
  tcase_add_test(tc, sprintf_s_check3);
  tcase_add_test(tc, sprintf_s_check4);
  tcase_add_test(tc, sprintf_u_check);
  tcase_add_test(tc, sprintf_d_check);
  tcase_add_test(tc, sprintf_o_check);
  tcase_add_test(tc, sprintf_x_check);
  tcase_add_test(tc, sprintf_X_check);
  tcase_add_test(tc, sprintf_f_check);
  tcase_add_test(tc, sprintf_e_check);
  tcase_add_test(tc, sprintf_i_check);
  tcase_add_test(tc, sprintf_p_check);
  // tcase_add_test(tc, sprintf_n_check);
  tcase_add_test(tc, sprintf_g_check);
  tcase_add_test(tc, sprintf_G_check);
  tcase_add_test(tc, sprintf_lhidu_check);
  tcase_add_test(tc, sprintf_return_check);

  tcase_add_test(tc, SPRINTFTestLaslhyn22);
  tcase_add_test(tc, SPRINTFTestLaslhyn23);
  tcase_add_test(tc, SPRINTFTestLaslhyn24);
  tcase_add_test(tc, SPRINTFTestLaslhyn25);
  tcase_add_test(tc, SPRINTFTestLaslhyn26);
  tcase_add_test(tc, SPRINTFTestLaslhyn27);
  tcase_add_test(tc, SPRINTFTestLaslhyn28);
  tcase_add_test(tc, SPRINTFTestLaslhyn31);
  tcase_add_test(tc, SPRINTFTestLaslhyn32);
  tcase_add_test(tc, SPRINTFTestLaslhyn33);
  tcase_add_test(tc, SPRINTFTestLaslhyn34);
  tcase_add_test(tc, SPRINTFTestLaslhyn35);
  tcase_add_test(tc, SPRINTFTestLaslhyn37);
  tcase_add_test(tc, SPRINTFTestLaslhyn38);
  tcase_add_test(tc, SPRINTFTestLaslhyn39);
  tcase_add_test(tc, SPRINTFTestLaslhyn40);
  tcase_add_test(tc, SPRINTFTestLaslhyn42);
  tcase_add_test(tc, SPRINTFTestLaslhyn43);
  tcase_add_test(tc, SPRINTFTestLaslhyn44);
  tcase_add_test(tc, SPRINTFTestLaslhyn45);
  tcase_add_test(tc, SPRINTFTestLaslhyn46);
  tcase_add_test(tc, SPRINTFTestLaslhyn47);
  tcase_add_test(tc, SPRINTFTestLaslhyn48);
  tcase_add_test(tc, SPRINTFTestLaslhyn49);
  tcase_add_test(tc, SPRINTFTestLaslhyn50);
  tcase_add_test(tc, SPRINTFTestLaslhyn52);
  tcase_add_test(tc, SPRINTFTestLaslhyn53);
  tcase_add_test(tc, SPRINTFTestLaslhyn54);
  tcase_add_test(tc, SPRINTFTestLaslhyn55);
  tcase_add_test(tc, SPRINTFTestLaslhyn56);
  tcase_add_test(tc, SPRINTFTestLaslhyn57);
  tcase_add_test(tc, SPRINTFTestLaslhyn58);
  tcase_add_test(tc, SPRINTFTestLaslhyn59);
  tcase_add_test(tc, SPRINTFTestLaslhyn60);
  tcase_add_test(tc, SPRINTFTestLaslhyn61);
  tcase_add_test(tc, SPRINTFTestLaslhyn62);
  tcase_add_test(tc, SPRINTFTestLaslhyn63);
  tcase_add_test(tc, SPRINTFTestLaslhyn64);
  tcase_add_test(tc, SPRINTFTestLaslhyn65);
  tcase_add_test(tc, SPRINTFTestLaslhyn66);
  tcase_add_test(tc, SPRINTFTestLaslhyn67);
  tcase_add_test(tc, SPRINTFTestLaslhyn68);
  tcase_add_test(tc, SPRINTFTestLaslhyn69);
  tcase_add_test(tc, SPRINTFTestLaslhyn70);
  tcase_add_test(tc, SPRINTFTestLaslhyn71);
  tcase_add_test(tc, SPRINTFTestLaslhyn72);
  tcase_add_test(tc, SPRINTFTestLaslhyn73);
  tcase_add_test(tc, SPRINTFTestLaslhyn74);
  tcase_add_test(tc, SPRINTFTestLaslhyn88);
  tcase_add_test(tc, SPRINTFTestLaslhyn89);
  tcase_add_test(tc, SPRINTFTestLaslhyn90);
  tcase_add_test(tc, SPRINTFTestLaslhyn91);
  tcase_add_test(tc, SPRINTFTestLaslhyn92);
  tcase_add_test(tc, SPRINTFTestLaslhyn93);
  tcase_add_test(tc, SPRINTFTestLaslhyn94);
  tcase_add_test(tc, SPRINTFTestLaslhyn95);
  tcase_add_test(tc, SPRINTFTestLaslhyn96);
  tcase_add_test(tc, SPRINTFTestLaslhyn97);
  tcase_add_test(tc, SPRINTFTestLaslhyn98);
  tcase_add_test(tc, SPRINTFTestLaslhyn99);
  tcase_add_test(tc, SPRINTFTestLaslhyn100);
  tcase_add_test(tc, SPRINTFTestLaslhyn101);
  tcase_add_test(tc, SPRINTFTestLaslhyn102);
  tcase_add_test(tc, SPRINTFTestLaslhyn103);
  tcase_add_test(tc, SPRINTFTestLaslhyn104);
  tcase_add_test(tc, SPRINTFTestLaslhyn105);
  tcase_add_test(tc, SPRINTFTestLaslhyn106);
  tcase_add_test(tc, SPRINTFTestLaslhyn107);
  tcase_add_test(tc, SPRINTFTestLaslhyn108);
  tcase_add_test(tc, SPRINTFTestLaslhyn109);
  tcase_add_test(tc, SPRINTFTestLaslhyn110);
  tcase_add_test(tc, SPRINTFTestLaslhyn111);
  tcase_add_test(tc, SPRINTFTestLaslhyn112);
  tcase_add_test(tc, SPRINTFTestLaslhyn113);
  tcase_add_test(tc, SPRINTFTestLaslhyn114);
  tcase_add_test(tc, SPRINTFTestLaslhyn115);
  tcase_add_test(tc, SPRINTFTestLaslhyn116);
  tcase_add_test(tc, SPRINTFTestLaslhyn155);
  tcase_add_test(tc, SPRINTFTestLaslhyn156);
  tcase_add_test(tc, SPRINTFTestLaslhyn157);
  tcase_add_test(tc, SPRINTFTestLaslhyn158);
  tcase_add_test(tc, SPRINTFTestLaslhyn159);
  tcase_add_test(tc, SPRINTFTestLaslhyn160);
  tcase_add_test(tc, SPRINTFTestLaslhyn161);
  tcase_add_test(tc, SPRINTFTestLaslhyn162);
  tcase_add_test(tc, SPRINTFTestLaslhyn163);
  tcase_add_test(tc, SPRINTFTestLaslhyn164);
  tcase_add_test(tc, SPRINTFTestLaslhyn165);
  tcase_add_test(tc, SPRINTFTestLaslhyn166);
  tcase_add_test(tc, SPRINTFTestLaslhyn167);
  tcase_add_test(tc, SPRINTFTestLaslhyn168);
  tcase_add_test(tc, SPRINTFTestLaslhyn169);
  tcase_add_test(tc, SPRINTFTestLaslhyn170);
  tcase_add_test(tc, SPRINTFTestLaslhyn171);
  tcase_add_test(tc, SPRINTFTestLaslhyn172);
  tcase_add_test(tc, SPRINTFTestLaslhyn173);
  tcase_add_test(tc, SPRINTFTestLaslhyn174);
  tcase_add_test(tc, SPRINTFTestLaslhyn176);
  tcase_add_test(tc, SPRINTFTestLaslhyn177);
  tcase_add_test(tc, SPRINTFTestLaslhyn183);
  tcase_add_test(tc, SPRINTFTestLaslhyn184);
  tcase_add_test(tc, SPRINTFTestLaslhyn185);
  tcase_add_test(tc, SPRINTFTestLaslhyn186);
  tcase_add_test(tc, SPRINTFTestLaslhyn187);
  tcase_add_test(tc, SPRINTFTestLaslhyn188);
  tcase_add_test(tc, SPRINTFTestLaslhyn189);
  tcase_add_test(tc, SPRINTFTestLaslhyn190);
  tcase_add_test(tc, SPRINTFTestLaslhyn191);
  tcase_add_test(tc, SPRINTFTestLaslhyn192);
  tcase_add_test(tc, SPRINTFTestLaslhyn193);
  tcase_add_test(tc, SPRINTFTestLaslhyn194);
  tcase_add_test(tc, SPRINTFTestLaslhyn195);
  tcase_add_test(tc, SPRINTFTestLaslhyn196);
  tcase_add_test(tc, SPRINTFTestLaslhyn197);
  tcase_add_test(tc, SPRINTFTestLaslhyn198);
  tcase_add_test(tc, SPRINTFTestLaslhyn199);
  tcase_add_test(tc, SPRINTFTestLaslhyn200);
  tcase_add_test(tc, SPRINTFTestLaslhyn201);
  tcase_add_test(tc, SPRINTFTestLaslhyn202);
  tcase_add_test(tc, SPRINTFTestLaslhyn203);
  tcase_add_test(tc, SPRINTFTestLaslhyn204);
  tcase_add_test(tc, SPRINTFTestLaslhyn205);
  tcase_add_test(tc, SPRINTFTestLaslhyn206);
  tcase_add_test(tc, SPRINTFTestLaslhyn207);
  tcase_add_test(tc, SPRINTFTestLaslhyn208);
  tcase_add_test(tc, SPRINTFTestLaslhyn209);
  tcase_add_test(tc, SPRINTFTestLaslhyn210);
  tcase_add_test(tc, SPRINTFTestLaslhyn211);
  tcase_add_test(tc, SPRINTFTestdogletho1);
  tcase_add_test(tc, SPRINTFTestdogletho2);
  tcase_add_test(tc, SPRINTFTestdogletho6);
  tcase_add_test(tc, SPRINTFTestdogletho52);
  tcase_add_test(tc, SPRINTFTestdogletho53);
  tcase_add_test(tc, SPRINTFTestdogletho54);
  tcase_add_test(tc, SPRINTFTestdogletho55);
  tcase_add_test(tc, SPRINTFTestdogletho56);
  tcase_add_test(tc, SPRINTFTestdogletho68);
  tcase_add_test(tc, SPRINTFTestdogletho69);
  tcase_add_test(tc, SPRINTFTestdogletho127);
  tcase_add_test(tc, SPRINTFTestdogletho128);
  tcase_add_test(tc, SPRINTFTestdogletho129);
  tcase_add_test(tc, SPRINTFTestdogletho130);
  tcase_add_test(tc, SPRINTFTestdogletho131);
  tcase_add_test(tc, SPRINTFTestdogletho187);
  tcase_add_test(tc, SPRINTFTestdogletho190);
  tcase_add_test(tc, SPRINTFTestdogletho197);
  tcase_add_test(tc, SPRINTFTestdogletho198);
  tcase_add_test(tc, SPRINTFTestdogletho232);
  tcase_add_test(tc, SPRINTFTestdogletho233);
  tcase_add_test(tc, SPRINTFTestdogletho234);
  tcase_add_test(tc, SPRINTFTestdogletho235);
  tcase_add_test(tc, SPRINTFTestdogletho236);
  tcase_add_test(tc, SPRINTFTestdogletho237);
  tcase_add_test(tc, SPRINTFTestdogletho239);
  tcase_add_test(tc, SPRINTFTestdogletho259);
  tcase_add_test(tc, SPRINTFTestdogletho261);
  tcase_add_test(tc, SPRINTFTestdogletho282);
  tcase_add_test(tc, SPRINTFTestdogletho283);
  tcase_add_test(tc, SPRINTFTestRleonard1);
  tcase_add_test(tc, SPRINTFTestRleonard3);
  tcase_add_test(tc, SPRINTFTestRleonard6);
  tcase_add_test(tc, SPRINTFTestRleonard7);
  tcase_add_test(tc, SPRINTFTestRleonard9);
  tcase_add_test(tc, SPRINTFTestRleonard12);
  // tcase_add_test(tc, SPRINTFTestRleonard13);
  // tcase_add_test(tc, SPRINTFTestRleonard14);
  tcase_add_test(tc, s21_sprintf_test_percent);
  tcase_add_test(tc, simple_int);
  tcase_add_test(tc, precise_int);
  tcase_add_test(tc, width_int);
  tcase_add_test(tc, minus_width_int);
  tcase_add_test(tc, plus_width_int);
  tcase_add_test(tc, padding_int);
  tcase_add_test(tc, flags_long_int);
  tcase_add_test(tc, flags_short_int);
  tcase_add_test(tc, zero_precision_zero_int);
  tcase_add_test(tc, space_flag_int);
  tcase_add_test(tc, unsigned_val);
  tcase_add_test(tc, unsigned_val_width);
  tcase_add_test(tc, unsigned_val_flags);
  tcase_add_test(tc, unsigned_val_precision);
  tcase_add_test(tc, unsigned_val_many_flags);
  tcase_add_test(tc, unsigned_val_short);
  tcase_add_test(tc, unsigned_val_long);
  tcase_add_test(tc, unsigned_val_many);
  tcase_add_test(tc, octal_short);
  tcase_add_test(tc, unsigned_zero);
  tcase_add_test(tc, one_char);
  tcase_add_test(tc, one_precision);
  tcase_add_test(tc, one_flags);
  tcase_add_test(tc, one_width);
  tcase_add_test(tc, one_many);
  tcase_add_test(tc, one_many_flags);
  tcase_add_test(tc, string);
  tcase_add_test(tc, string_precision);
  tcase_add_test(tc, string_width);
  tcase_add_test(tc, string_flags);
  tcase_add_test(tc, string_long);
  tcase_add_test(tc, string_many);
  tcase_add_test(tc, string_width_huge);
  tcase_add_test(tc, float_flags);
  tcase_add_test(tc, all_empty);
  tcase_add_test(tc, empty_format_and_parameters);
  tcase_add_test(tc, test_one_char);
  tcase_add_test(tc, test_many_char);
  tcase_add_test(tc, test_one_string);
  tcase_add_test(tc, test_many_string);
  tcase_add_test(tc, test_one_dec);
  tcase_add_test(tc, test_many_dec);
  tcase_add_test(tc, test_one_int);
  tcase_add_test(tc, test_many_int);
  tcase_add_test(tc, test_one_float);
  tcase_add_test(tc, test_many_float);
  tcase_add_test(tc, test_one_unsigned_dec);
  tcase_add_test(tc, test_many_unsigned_dec);
  tcase_add_test(tc, test_one_char_with_alignment_left);
  tcase_add_test(tc, test_one_char_with_alignment_right);
  tcase_add_test(tc, test_many_char_with_alignment);
  tcase_add_test(tc, test_sprintf1);
  tcase_add_test(tc, test_sprintf2);
  tcase_add_test(tc, test_sprintf3);
  tcase_add_test(tc, test_sprintf4);
  tcase_add_test(tc, test_sprintf6);
  tcase_add_test(tc, test_sprintf7);
  tcase_add_test(tc, test_sprintf8);
  tcase_add_test(tc, test_sprintf9);
  tcase_add_test(tc, test_sprintf10);
  tcase_add_test(tc, test_sprintf11);
  tcase_add_test(tc, test_sprintf16);
  tcase_add_test(tc, test_sprintf17);
  tcase_add_test(tc, test_sprintf18);
  tcase_add_test(tc, test_sprintf19);
  tcase_add_test(tc, test_sprintf20);
  tcase_add_test(tc, test_sprintf24);
  tcase_add_test(tc, test_sprintf25);
  // tcase_add_test(tc, test_sprintf26);
  // tcase_add_test(tc, test_sprintf27);
  tcase_add_test(tc, test_sprintf29);
  tcase_add_test(tc, test_sprintf30);
  // tcase_add_test(tc, wide_char);
  // tcase_add_test(tc, width_char);
  // tcase_add_test(tc, minus_wide_char);
  // tcase_add_test(tc, wide_string);
  // tcase_add_test(tc, wide_string1);
  // tcase_add_test(tc, wide_string2);
  // tcase_add_test(tc, wide_string3);
  tcase_add_test(tc, SPRINTF_FLOAT);
  tcase_add_test(tc, SPRINTF_FLOAT_PREC);
  tcase_add_test(tc, SPRINTF_FLOAT_H);
  tcase_add_test(tc, SPRINTF_FLOAT_H_PREC);
  tcase_add_test(tc, SPRINTF_FLOAT_MINUS);
  tcase_add_test(tc, SPRINTF_FLOAT_MINUS_DIGIT);
  tcase_add_test(tc, SPRINTF_FLOAT_SPACE);
  tcase_add_test(tc, SPRINTF_FLOAT_PLUS_H);
  tcase_add_test(tc, SPRINTF_FLOAT_LONG);
  tcase_add_test(tc, SPRINTF_DECIMAL);
  tcase_add_test(tc, SPRINTF_DECIMAL_PREC);
  // tcase_add_test(tc, SPRINTF_DECIMAL_L);
  // tcase_add_test(tc, SPRINTF_DECIMAL_H);
  tcase_add_test(tc, SPRINTF_DECIMAL_MINUS_DIGIT);
  tcase_add_test(tc, SPRINTF_DECIMAL_PLUS_DIGIT);
  tcase_add_test(tc, SPRINTF_DECIMAL_MINUS_H);
  tcase_add_test(tc, SPRINTF_DECIMAL_SPACE);
  tcase_add_test(tc, SPRINTF_UNSIGNED);
  tcase_add_test(tc, SPRINTF_UNSIGNED_MINUS_DIGIT);
  // tcase_add_test(tc, SPRINTF_UNSIGNED_LONG);
  // tcase_add_test(tc, SPRINTF_UNSIGNED_SHORT);
  tcase_add_test(tc, SPRINTF_UNSIGNED_MINUS_H);
  tcase_add_test(tc, SPRINTF_UNSIGNED_H);
  tcase_add_test(tc, SPRINTF_UNSIGNED_SPACE);
  tcase_add_test(tc, SPRINTF_CHAR);
  tcase_add_test(tc, SPRINTF_CHAR_DIGIT);
  tcase_add_test(tc, SPRINTF_CHAR_H);
  tcase_add_test(tc, SPRINTF_CHAR_MINUS_H);
  tcase_add_test(tc, SPRINTF_CHAR_SPACE);
  tcase_add_test(tc, SPRINTF_STRING);
  tcase_add_test(tc, SPRINTF_STRING_SYMBOLS);
  tcase_add_test(tc, SPRINTF_STRING_MINUS_H);
  tcase_add_test(tc, SPRINTF_STRING_H);
  tcase_add_test(tc, SPRINTF_STRING_SPACE);
  tcase_add_test(tc, SPRINTF_I_DEC);
  tcase_add_test(tc, SPRINTF_I_OCTAL);
  tcase_add_test(tc, SPRINTF_I_HEX);
  tcase_add_test(tc, SPRINTF_I_H);
  tcase_add_test(tc, SPRINTF_I_MINUS_H);
  tcase_add_test(tc, SPRINTF_I_PLUS);
  tcase_add_test(tc, SPRINTF_I_PLUS_H);
  tcase_add_test(tc, SPRINTF_I_SPACE);
  // tcase_add_test(tc, s21_sprintf_d);
  // tcase_add_test(tc, s21_sprintf_u);
  // tcase_add_test(tc, s21_sprintf_cs);
  // tcase_add_test(tc, s21_sprintf_f);
  // tcase_add_test(tc, s21_sprintf_i);
  // tcase_add_test(tc, s21_sprintf_s);
  // tcase_add_test(tc, s21_sprintf_h);
  // //tcase_add_test(tc, s21_sprintf_l);
  // tcase_add_test(tc, s21_sprintf_star);
  // tcase_add_test(tc, s21_sprintf_empty);
  // tcase_add_test(tc, s21_sprintf_diu_whith_str);
  // tcase_add_test(tc, s21_sprintf_f_with_str);
  tcase_add_test(tc, sprintf_simple_int);
  tcase_add_test(tc, sprintf_negative_int);
  tcase_add_test(tc, sprintf_all_flags_int);
  tcase_add_test(tc, sprintf_all_flags_int1);
  tcase_add_test(tc, sprintf_all_flags_int2);
  tcase_add_test(tc, sprintf_all_flags_int3);
  tcase_add_test(tc, sprintf_all_flags_int4);
  tcase_add_test(tc, sprintf_all_flags_int5);
  tcase_add_test(tc, sprintf_all_flags_int6);
  tcase_add_test(tc, sprintf_all_flags_int7);
  tcase_add_test(tc, sprintf_precise_int);
  tcase_add_test(tc, sprintf_width_int);
  tcase_add_test(tc, sprintf_minus_width_int);
  tcase_add_test(tc, sprintf_plus_width_int);
  tcase_add_test(tc, sprintf_padding_int);
  tcase_add_test(tc, sprintf_star_width_int);
  tcase_add_test(tc, sprintf_star_precision_int);
  tcase_add_test(tc, sprintf_many_flags_many_ints);
  tcase_add_test(tc, sprintf_flags_long_int);
  tcase_add_test(tc, sprintf_flags_short_int);
  tcase_add_test(tc, sprintf_flags_another_long_int);
  tcase_add_test(tc, sprintf_zero_precision_zero_int);
  tcase_add_test(tc, sprintf_space_flag_int);
  tcase_add_test(tc, sprintf_unsigned_val);
  tcase_add_test(tc, sprintf_unsigned_val_width);
  tcase_add_test(tc, sprintf_unsigned_val_flags);
  tcase_add_test(tc, sprintf_unsigned_val_precision);
  tcase_add_test(tc, sprintf_unsigned_val_many_flags);
  tcase_add_test(tc, sprintf_unsigned_val_short);
  tcase_add_test(tc, sprintf_unsigned_val_long);
  tcase_add_test(tc, sprintf_unsigned_val_many);

  tcase_add_test(tc, sprintf_octal_width);
  tcase_add_test(tc, sprintf_octal_flags);
  tcase_add_test(tc, sprintf_octal_precision);
  tcase_add_test(tc, sprintf_octal_many_flags);
  tcase_add_test(tc, sprintf_octal_short);
  tcase_add_test(tc, sprintf_octal_long);
  tcase_add_test(tc, sprintf_octal_many);
  tcase_add_test(tc, sprintf_octal);
  tcase_add_test(tc, sprintf_octal_zero);
  tcase_add_test(tc, sprintf_octal_zero_accuracy_0);
  tcase_add_test(tc, sprintf_octal_hash);
  tcase_add_test(tc, sprintf_octal_hash_space);
  tcase_add_test(tc, sprintf_octal_hash_negavie_space);
  tcase_add_test(tc, sprintf_unsigned_zero);
  tcase_add_test(tc, sprintf_hex_width);
  tcase_add_test(tc, sprintf_hex_flags);
  tcase_add_test(tc, sprintf_hex_precision);
  tcase_add_test(tc, sprintf_hex_many);
  tcase_add_test(tc, sprintf_hex_many_flags);
  tcase_add_test(tc, sprintf_hex_zero);
  tcase_add_test(tc, sprintf_hex_huge);
  tcase_add_test(tc, sprintf_hex_short);
  tcase_add_test(tc, sprintf_hex_long);
  tcase_add_test(tc, sprintf_hex_one_longer_width);
  tcase_add_test(tc, sprintf_hex_two_longer_width);
  tcase_add_test(tc, sprintf_one_char);
  // tcase_add_test(tc, sprintf_one_char_0_flag);
  tcase_add_test(tc, sprintf_one_precision);
  tcase_add_test(tc, sprintf_one_flags);
  tcase_add_test(tc, sprintf_one_width);
  tcase_add_test(tc, sprintf_one_many);
  tcase_add_test(tc, sprintf_one_many_flags);
  tcase_add_test(tc, sprintf_string);
  tcase_add_test(tc, sprintf_string_precision);
  tcase_add_test(tc, sprintf_string_width);
  tcase_add_test(tc, sprintf_string_flags);
  tcase_add_test(tc, sprintf_string_long);
  tcase_add_test(tc, sprintf_string_many);
  tcase_add_test(tc, sprintf_ptr);
  tcase_add_test(tc, sprintf_ptr_width);
  tcase_add_test(tc, sprintf_ptr_precision);
  tcase_add_test(tc, sprintf_n_specifier);
  tcase_add_test(tc, sprintf_string_width_huge);
  tcase_add_test(tc, sprintf_float_precision);
  tcase_add_test(tc, sprintf_float_width);
  tcase_add_test(tc, sprintf_float_precision_zero);
  tcase_add_test(tc, sprintf_float_precision_empty);
  tcase_add_test(tc, sprintf_float_precision_huge);
  tcase_add_test(tc, sprintf_float_precision_huge_negative);
  tcase_add_test(tc, sprintf_float_huge);
  tcase_add_test(tc, sprintf_float_flags);
  tcase_add_test(tc, sprintf_float_many);
  tcase_add_test(tc, sprintf_e_precision_zero);
  tcase_add_test(tc, sprintf_e_precision_empty);
  tcase_add_test(tc, sprintf_e_precision_huge);
  tcase_add_test(tc, sprintf_e_precision_huge_negative);
  tcase_add_test(tc, sprintf_e_huge);
  tcase_add_test(tc, sprintf_e_many);
  tcase_add_test(tc, sprintf_e_many_plus);
  tcase_add_test(tc, sprintf_e_width);
  tcase_add_test(tc, sprintf_e_flags);
  tcase_add_test(tc, sprintf_all_empty);
  tcase_add_test(tc, sprintf_empty_format_and_parameters);
  tcase_add_test(tc, sprintf_test_one_char);
  tcase_add_test(tc, sprintf_test_many_char);
  tcase_add_test(tc, sprintf_test_one_string);
  tcase_add_test(tc, sprintf_test_many_string);
  tcase_add_test(tc, sprintf_test_one_dec);
  tcase_add_test(tc, sprintf_test_many_dec);
  tcase_add_test(tc, sprintf_test_one_int);
  tcase_add_test(tc, sprintf_test_many_int);
  tcase_add_test(tc, sprintf_test_one_float);
  tcase_add_test(tc, sprintf_test_many_float);
  tcase_add_test(tc, sprintf_test_one_unsigned_dec);
  tcase_add_test(tc, sprintf_test_many_unsigned_dec);
  tcase_add_test(tc, sprintf_test_one_char_with_alignment_left);
  tcase_add_test(tc, sprintf_test_one_char_with_alignment_right);
  tcase_add_test(tc, sprintf_test_many_char_with_alignment);
  tcase_add_test(tc, sprintf_test_one_hex_lower);
  tcase_add_test(tc, sprintf_test_one_hex_upper);
  tcase_add_test(tc, sprintf_test_many_hex_lower);
  tcase_add_test(tc, sprintf_test_many_hex_upper);
  tcase_add_test(tc, sprintf_test_one_hex_lower_with_alignment_left);
  tcase_add_test(tc, sprintf_test_one_hex_lower_with_alignment_right);
  tcase_add_test(tc, sprintf_test_one_hex_upper_with_alignment_left);
  tcase_add_test(tc, sprintf_test_one_hex_upper_with_alignment_right);
  tcase_add_test(tc, sprintf_test_many_hex_lower_with_alignment);
  tcase_add_test(tc, sprintf_test_many_hex_upper_with_alignment);
  tcase_add_test(tc, sprintf_test_one_hex_with_hashtag);
  tcase_add_test(tc, sprintf_test_one_hex_upper_with_hashtag);
  tcase_add_test(tc, sprintf_test_many_hex_lower_with_hashtag_and_alignm);
  tcase_add_test(tc, sprintf_test_many_hex_upper_with_hashtag_and_alignm);
  tcase_add_test(tc, sprintf_test_one_hex_lower_with_width_star);
  tcase_add_test(tc, sprintf_test_one_hex_upper_with_width_star);
  tcase_add_test(
      tc, sprintf_test_many_hex_lower_with_width_star_and_align_and_hashtag);
  tcase_add_test(tc, sprintf_test_many_hex_upper_with_width_star);
  tcase_add_test(tc, sprintf_test_one_hex_lower_with_precision);
  tcase_add_test(tc, sprintf_test_one_hex_upper_with_precision);
  tcase_add_test(tc, sprintf_test_many_hex_lower_with_precision_and_other);
  tcase_add_test(tc, sprintf_test_many_hex_upper_with_precision_and_other);
  tcase_add_test(tc, sprintf_test_one_hex_lower_with_length);
  tcase_add_test(tc, sprintf_test_one_hex_upper_with_length);
  tcase_add_test(tc, sprintf_test_sprintf1);
  tcase_add_test(tc, sprintf_test_sprintf2);
  tcase_add_test(tc, sprintf_test_sprintf3);
  tcase_add_test(tc, sprintf_test_sprintf4);
  tcase_add_test(tc, sprintf_test_sprintf6);
  tcase_add_test(tc, sprintf_test_sprintf7);
  tcase_add_test(tc, sprintf_test_sprintf8);
  tcase_add_test(tc, sprintf_test_sprintf9);
  tcase_add_test(tc, sprintf_test_sprintf10);
  tcase_add_test(tc, sprintf_test_sprintf11);
  tcase_add_test(tc, sprintf_test_sprintf14);
  tcase_add_test(tc, sprintf_test_sprintf15);
  tcase_add_test(tc, sprintf_test_sprintf16);
  tcase_add_test(tc, sprintf_test_sprintf17);
  tcase_add_test(tc, sprintf_test_sprintf18);
  tcase_add_test(tc, sprintf_test_sprintf19);
  tcase_add_test(tc, sprintf_test_sprintf20);
  tcase_add_test(tc, sprintf_test_sprintf24);
  tcase_add_test(tc, sprintf_test_sprintf25);
  tcase_add_test(tc, sprintf_test_sprintf28);
  tcase_add_test(tc, sprintf_test_sprintf29);
  tcase_add_test(tc, sprintf_test_sprintf30);
  tcase_add_test(tc, sprintf_test_sprintf31);
  tcase_add_test(tc, sprintf_test_sprintf32);
  tcase_add_test(tc, sprintf_test_sprintf33);
  tcase_add_test(tc, sprintf_test_sprintf35);
  tcase_add_test(tc, sprintf_test_sprintf36);
  tcase_add_test(tc, sprintf_test_sprintf37);
  tcase_add_test(tc, sprintf_test_sprintf38);
  tcase_add_test(tc, sprintf_test_sprintf39);
  tcase_add_test(tc, sprintf_test_sprintf40);
  tcase_add_test(tc, sprintf_test_sprintf41);
  tcase_add_test(tc, sprintf_test_sprintf42);
  tcase_add_test(tc, sprintf_test_sprintf43);
  tcase_add_test(tc, sprintf_test_sprintf44);
  tcase_add_test(tc, sprintf_g_trailing_zero);
  tcase_add_test(tc, sprintf_g_digits_more_than_accuracy);
  tcase_add_test(tc, sprintf_g_large);
  tcase_add_test(tc, sprintf_g_small);
  tcase_add_test(tc, sprintf_g_precision);
  tcase_add_test(tc, sprintf_g_precision_zero);  // SEGMENTATION
  tcase_add_test(tc, sprintf_g_one_zero);
  tcase_add_test(tc, sprintf_g_short_no_mantiss);
  tcase_add_test(tc, sprintf_g_zero);
  // tcase_add_test(tc, sprintf_g_zero_L);
  tcase_add_test(tc, sprintf_G_large);
  // tcase_add_test(tc, sprintf_G_large_L);
  tcase_add_test(tc, sprintf_G_small);
  tcase_add_test(tc, sprintf_G_precision);
  tcase_add_test(tc, sprintf_G_precision_zero);  // SEGMENTATION
  tcase_add_test(tc, sprintf_G_one_zero);
  tcase_add_test(tc, sprintf_G_short_no_mantiss);
  tcase_add_test(tc, sprintf_G_zero);
  suite_add_tcase(s, tc);

  return s;
}
