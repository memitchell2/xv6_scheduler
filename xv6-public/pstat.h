#ifndef _PSTAT_H_
#define _PSTAT_H_

#include "param.h"

struct pstat {
  int inuse[NPROC];    // Whether this slot of the process table is in use (1 or 0)
  int pid[NPROC];      // PID of each process
  int tickets[NPROC];  // Number of tickets the process has
  int runticks[NPROC]; // Total number of timer ticks this process has been scheduled
  int boostsleft[NPROC]; // Number of ticks left for which this process will be boosted
};

#endif // _PSTAT_H_
