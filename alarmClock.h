#ifndef ALARMCLOCK_H
#define ALARMCLOCK_H 

#include <stdio.h>

enum Status { Alarm, Off, Wait };
enum Status alarmClockStatus(enum Status status, int key, int time);
void alarmClock(int a[], int size);

#endif