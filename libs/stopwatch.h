#ifndef __START_TIME__H__
#define __START_TIME__H__

#include <stdio.h>
#include <sys/time.h>

static struct timeval start_time;

void start(){
  gettimeofday(&start_time, NULL);
}

unsigned long long time_elapsed_ms(){
  struct timeval new_now;

  gettimeofday(&new_now, NULL);

  return  (new_now.tv_sec - start_time.tv_sec) * 1000 + (new_now.tv_usec - start_time.tv_usec) / 1000;
}


#endif //__START_TIME__H__