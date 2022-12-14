#ifndef __SCHEDULER_ARGS__
#define __SCHEDULER_ARGS__

#include "globals.h"

// Constantes com definicoes de tempos e limites
#define MAX_PROCESSES 5
#define MAX_IO 3
#define TIME_SLICE getTimeSlice()
#define DISK_TIMER getDiskTimer()
#define TAPE_TIMER getTapeTimer()
#define PRINTER_TIME getPrinterTimer()

extern int getTimeSlice();
extern int getDiskTimer();
extern int getTapeTimer();
extern int getPrinterTimer();
extern void readArgumentsFromConsole(int argc, char *argv[]);

#endif
