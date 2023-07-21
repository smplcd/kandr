/*
 * Exercise 5.3 p. 107
 * string concatenation
 * compiled with -fno-builtin because "strcat" is part of <string.h>
 */

#include <stdio.h>

char a[] = "hello, ";
char b[] = "world.";
void strcat(char *s, char *t);

int main(int argc, char *argv){
	strcat(a, b);
	printf("%s\n", a);

	return 0;
}

void strcat(char *s, char *t){
	while (*++s);
	while (*s++ = *t++);
}

