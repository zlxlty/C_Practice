#ifndef _STRING_H_
#define _STRING_H_

#define STR "Hello world"

int strlen1(char *p);
int strlen2(char *p);
void strcpy1(char *des, const char *src);
void strcpy2(char des[], const char src[]);
int strcmp1(const char *a, const char *b);
int strcmp2(const char *a, const char *b);
char *strcat1(char *des, const char *src);
int strend(const char a[], const char b[]);
char *strncpy1(char *des, const char *src, int n);
char *strncat1(char *des, const char *src, int n);
int strncmp1(const char *a, const char *b, int n);

#endif
