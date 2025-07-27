#pragma once
#include <stdio.h>
#include <stdlib.h>

int string_length(const char* s);
int string_compare(const char* s1, const char* s2);
int string_n_compare(const char* s1, const char* s2, int n);
void string_copy(char* dst, char* src);
void string_n_copy(char* dst, char* src, int n);
void string_concatenation(char* dst, char* src);
void string_n_concatenation(char* dst, char* src, int n);
char* string_first_char(char* str, int c);
char* string_last_char(char* str, int c);
char* string_first_substring(char* str, char* substr);
char* string_tokenizer(char* str, int delimiter);
