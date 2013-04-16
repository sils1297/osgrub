#ifndef text_output_h
#define text_output_h

#include <stdint.h>

void printColoredChar(char, char);
void printColoredString(char *, char);
void strcat(char *, char *);
void strcpy(char *, char *);
char charDigit(unsigned char);
void intToStr(char *, int, char);

#define printChar(charVar) printColoredChar((charVar), 0x0F)
#define printString(strPtr) printColoredString((strPtr), 0x0F)

#endif
