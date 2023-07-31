#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
int _putchar(char c);

void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);

int _re_sqr(int n, int i);
int _divisible(int n, int i);
int _strlen(char *s);
int check_str(char *str, int i, int len);
int is_wildcard(char *str, const int i, int count);
int check_char(char *str1, char *str2, int i, int j, int t);

#endif
