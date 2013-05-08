#ifndef timer_h
#define timer_h

#include "../../stdio/stdio.h"
#include "../idt.h"

void initTimer(const uint32_t freq);

uint8_t sec,min,hour,day,mon;
uint16_t year;

#endif
