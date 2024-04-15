#include "tests.h"

// START_TEST(memcmp_1) {
//   s21_size_t n1 = 3;
//   void *str_1_1 = "2!";
//   void *str_1_2 = "2!";
//   ck_assert_int_eq(memcmp(str_1_1, str_1_2, n1),
//                    s21_memcmp(str_1_1, str_1_2, n1));
// }
// END_TEST

// START_TEST(memcmp_2) {
//   s21_size_t n2 = 3;
//   void *str_2_1 = "2!";
//   void *str_2_2 = "3!!";
//   ck_assert_int_eq(memcmp(str_2_1, str_2_2, n2),
//                    s21_memcmp(str_2_1, str_2_2, n2));
// }
// END_TEST

// START_TEST(memcmp_3) {
//   s21_size_t n3 = 3;
//   void *str_3_1 = "3!!";
//   void *str_3_2 = "2!";
//   ck_assert_int_eq(memcmp(str_3_1, str_3_2, n3),
//                    s21_memcmp(str_3_1, str_3_2, n3));
// }
// END_TEST

// START_TEST(memcmp_zero_byte) {
//   char str1[] = "aboba";
//   char str2[] = "aboba";
//   int n = 0;
//   ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
// }
// END_TEST

// START_TEST(memcmp_first_byte_in_string) {
//   char str1[] = "aboba";
//   char str2[] = "aboba";
//   int n = 3;
//   ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
// }
// END_TEST

// START_TEST(memcmp_register_test) {
//   char str1[] = "aboba";
//   char str2[] = "Aboba";
//   int n = 1;
//   ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
// }
// END_TEST

// START_TEST(memcmp_zero_byte_in_num) {
//   char str1[] = "1";
//   char str2[] = "1";
//   int n = 0;
//   ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
// }
// END_TEST

// START_TEST(memcmp_first_byte_in_num) {
//   char str1[] = "1";
//   char str2[] = "1234";
//   int n = 1;
//   ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
// }
// END_TEST

// START_TEST(memcmp_two_byte_in_num) {
//   char str1[] = "1234";
//   char str2[] = "1234";
//   int n = 2;
//   ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
// }
// END_TEST

// START_TEST(memcmp_two_byte_long_two_num) {
//   char str1[] = "13";
//   char str2[] = "1234";
//   int n = 2;
//   ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
// }
// END_TEST

// START_TEST(memcmp_two_byte_long_first_num) {
//   char str1[] = "134567";
//   char str2[] = "1234";
//   int n = 2;
//   ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
// }
// END_TEST

// START_TEST(memcmp_eq_long_string) {
//   char str1[] =
//       "111111111111111111112312312312312312434524563567adsfe 4rafa
//       ewfseASDASD";
//   char str2[] =
//       "111111111111111111112312312312312312434524563567adsfe 4rafa
//       ewfseASDASD";
//   int n = 71;
//   ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
// }
// END_TEST

// START_TEST(memcmp_not_eq_long_string) {
//   char str1[] =
//       "111111111111111111112312312312312312434524563567adsfe 4rafa
//       ewfseASDASD";
//   char str2[] =
//       "111111111111111111112312312312312312434524563567adsfe 4rafa
//       ewfseASDASd";
//   int n = 71;
//   ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
// }
// END_TEST

// START_TEST(zero_byte) {
//   char str1[] = "aboba";
//   char str2[] = "aboba";
//   int n = 0;

//   ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
// }
// END_TEST

// START_TEST(first_byte_in_string) {
//   char str1[] = "aboba";
//   char str2[] = "aboba";
//   int n = 3;

//   ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
// }
// END_TEST

// START_TEST(register_test) {
//   char str1[] = "aboba";
//   char str2[] = "Aboba";
//   int n = 1;

//   ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
// }
// END_TEST

// START_TEST(zero_byte_in_num) {
//   char str1[] = "1";
//   char str2[] = "1";
//   int n = 0;

//   ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
// }
// END_TEST

// START_TEST(first_byte_in_num) {
//   char str1[] = "1";
//   char str2[] = "1234";
//   int n = 1;

//   ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
// }
// END_TEST

// START_TEST(two_byte_in_num) {
//   char str1[] = "1234";
//   char str2[] = "1234";
//   int n = 2;

//   ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
// }
// END_TEST

// START_TEST(two_byte_long_two_num) {
//   char str1[] = "13";
//   char str2[] = "1234";
//   int n = 2;

//   ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
// }
// END_TEST

// START_TEST(two_byte_long_first_num) {
//   char str1[] = "134567";
//   char str2[] = "1234";
//   int n = 2;

//   ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
// }
// END_TEST

// START_TEST(eq_long_string) {
//   char str1[] =
//       "111111111111111111112312312312312312434524563567adsfe 4rafa
//       ewfseASDASD";
//   char str2[] =
//       "111111111111111111112312312312312312434524563567adsfe 4rafa
//       ewfseASDASD";
//   int n = 71;

//   ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
// }
// END_TEST

// START_TEST(not_eq_long_string) {
//   char str1[] =
//       "111111111111111111112312312312312312434524563567adsfe 4rafa
//       ewfseASDASD";
//   char str2[] =
//       "111111111111111111112312312312312312434524563567adsfe 4rafa
//       ewfseASDASd";
//   int n = 71;

//   ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
// }
// END_TEST

START_TEST(memcmp_1) {
#line 264
  char str1[] = "abc";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_2) {
#line 270
  char str1[] = "Abc";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_3) {
#line 276
  char str1[] = "abc";
  char str2[] = "Abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_4) {
#line 282
  char str1[] = "abC";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_5) {
#line 288
  char str1[] = "abc";
  char str2[] = "abC";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_6) {
#line 294
  char str1[] = "ABC";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_7) {
#line 300
  char str1[] = "abc";
  char str2[] = "ABC";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_8) {
#line 306
  char str1[] = "a b c";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_9) {
#line 312
  char str1[] = "abc";
  char str2[] = "a b c";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_10) {
#line 318
  char str1[] = "";
  char str2[] = "abc";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_11) {
#line 324
  char str1[] = "abc";
  char str2[] = "";
  int n = 1;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_12) {
#line 330
  char str1[] = " ";  //////////////////////////
  char str2[] = "abc";
  int n = 1;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_13) {
#line 336
  char str1[] = "abc";
  char str2[] = " ";
  int n = 2;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_14) {
#line 342
  char str1[] = "9087";
  char str2[] = "657";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_15) {
#line 348
  char str1[] = "";
  char str2[] = "";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_16) {
#line 354
  char str1[] = " ";
  char str2[] = " ";
  int n = 2;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_17) {
#line 360
  char str1[] = "abc ";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_18) {
#line 366
  char str1[] = "abc";
  char str2[] = "abc ";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_19) {
#line 372
  char str1[] = " abc";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_20) {
#line 378
  char str1[] = "abc";
  char str2[] = " abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_21) {
#line 384
  char str1[] = "123";
  char str2[] = "123";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_22) {
#line 390
  char str1[] = "123";
  char str2[] = "321";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_23) {
#line 396
  char str1[] = "321";
  char str2[] = "321";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_24) {
#line 402
  char str1[] = "321";
  char str2[] = "123";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_25) {
#line 408
  char str1[] = "1234";
  char str2[] = "123";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_26) {
#line 414
  char str1[] = "132";
  char str2[] = "1234";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_27) {
#line 420
  char str1[] = "abcd";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_28) {
#line 426
  char str1[] = "abc";
  char str2[] = "abcd";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_29) {
#line 432
  char str1[] = "12ab";
  char str2[] = "12ab";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_30) {
#line 438
  char str1[] = "ab12";
  char str2[] = "12ab";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_31) {
#line 444
  char str1[] = "abc";
  char str2[] = "abc";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_32) {
#line 450
  char str1[] = "Abc";
  char str2[] = "abc";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_33) {
#line 456
  char str1[] = "abc";
  char str2[] = "Abc";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_34) {
#line 462
  char str1[] = "abC";
  char str2[] = "abc";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_35) {
#line 468
  char str1[] = "abc";
  char str2[] = "abC";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_36) {
#line 474
  char str1[] = "ABC";
  char str2[] = "abc";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_37) {
#line 480
  char str1[] = "abc";
  char str2[] = "ABC";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_38) {
#line 486
  char str1[] = "a b c";
  char str2[] = "abc";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_39) {
#line 492
  char str1[] = "abc";
  char str2[] = "a b c";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_50) {
#line 498
  char str1[] = "abc";
  char str2[] = " abc";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_51) {
#line 504
  char str1[] = "123";
  char str2[] = "123";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_52) {
#line 510
  char str1[] = "123";
  char str2[] = "321";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_53) {
#line 516
  char str1[] = "321";
  char str2[] = "321";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_54) {
#line 522
  char str1[] = "321";
  char str2[] = "123";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_55) {
#line 528
  char str1[] = "1234";
  char str2[] = "123";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_56) {
#line 534
  char str1[] = "132";
  char str2[] = "1234";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_57) {
#line 540
  char str1[] = "abcd";
  char str2[] = "abc";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_58) {
#line 546
  char str1[] = "abc";
  char str2[] = "abcd";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_59) {
#line 552
  char str1[] = "12ab";
  char str2[] = "12ab";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_60) {
#line 558
  char str1[] = "ab12";
  char str2[] = "12ab";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

Suite *suite_memcmp(void) {
  Suite *s = suite_create("suite_memcmp");
  TCase *tc = tcase_create("memcmp_tc");
  // tcase_add_test(tc, memcmp_1);
  // tcase_add_test(tc, memcmp_2);
  // tcase_add_test(tc, memcmp_3);
  // tcase_add_test(tc, memcmp_zero_byte);
  // tcase_add_test(tc, memcmp_first_byte_in_string);
  // tcase_add_test(tc, memcmp_register_test);
  // tcase_add_test(tc, memcmp_zero_byte_in_num);
  // tcase_add_test(tc, memcmp_first_byte_in_num);
  // tcase_add_test(tc, memcmp_two_byte_in_num);
  // tcase_add_test(tc, memcmp_two_byte_long_two_num);
  // tcase_add_test(tc, memcmp_two_byte_long_first_num);
  // tcase_add_test(tc, memcmp_eq_long_string);
  // tcase_add_test(tc, memcmp_not_eq_long_string);
  // tcase_add_test(tc, zero_byte);
  // tcase_add_test(tc, first_byte_in_string);
  // tcase_add_test(tc, register_test);
  // tcase_add_test(tc, zero_byte_in_num);
  // tcase_add_test(tc, first_byte_in_num);
  // tcase_add_test(tc, two_byte_in_num);
  // tcase_add_test(tc, two_byte_long_two_num);
  // tcase_add_test(tc, two_byte_long_first_num);
  // tcase_add_test(tc, eq_long_string);
  // tcase_add_test(tc, not_eq_long_string);
  tcase_add_test(tc, memcmp_1);
  tcase_add_test(tc, memcmp_2);
  tcase_add_test(tc, memcmp_3);
  tcase_add_test(tc, memcmp_4);
  tcase_add_test(tc, memcmp_5);
  tcase_add_test(tc, memcmp_6);
  tcase_add_test(tc, memcmp_7);
  tcase_add_test(tc, memcmp_8);
  tcase_add_test(tc, memcmp_9);
  tcase_add_test(tc, memcmp_10);
  tcase_add_test(tc, memcmp_11);
  tcase_add_test(tc, memcmp_12);
  tcase_add_test(tc, memcmp_13);
  tcase_add_test(tc, memcmp_14);
  tcase_add_test(tc, memcmp_15);
  tcase_add_test(tc, memcmp_16);
  tcase_add_test(tc, memcmp_17);
  tcase_add_test(tc, memcmp_18);
  tcase_add_test(tc, memcmp_19);
  tcase_add_test(tc, memcmp_20);
  tcase_add_test(tc, memcmp_21);
  tcase_add_test(tc, memcmp_22);
  tcase_add_test(tc, memcmp_23);
  tcase_add_test(tc, memcmp_24);
  tcase_add_test(tc, memcmp_25);
  tcase_add_test(tc, memcmp_26);
  tcase_add_test(tc, memcmp_27);
  tcase_add_test(tc, memcmp_28);
  tcase_add_test(tc, memcmp_29);
  tcase_add_test(tc, memcmp_30);
  tcase_add_test(tc, memcmp_31);
  tcase_add_test(tc, memcmp_32);
  tcase_add_test(tc, memcmp_33);
  tcase_add_test(tc, memcmp_34);
  tcase_add_test(tc, memcmp_35);
  tcase_add_test(tc, memcmp_36);
  tcase_add_test(tc, memcmp_37);
  tcase_add_test(tc, memcmp_38);
  tcase_add_test(tc, memcmp_39);
  tcase_add_test(tc, memcmp_50);
  tcase_add_test(tc, memcmp_51);
  tcase_add_test(tc, memcmp_52);
  tcase_add_test(tc, memcmp_53);
  tcase_add_test(tc, memcmp_54);
  tcase_add_test(tc, memcmp_55);
  tcase_add_test(tc, memcmp_56);
  tcase_add_test(tc, memcmp_57);
  tcase_add_test(tc, memcmp_58);
  tcase_add_test(tc, memcmp_59);
  tcase_add_test(tc, memcmp_60);

  suite_add_tcase(s, tc);

  return s;
}