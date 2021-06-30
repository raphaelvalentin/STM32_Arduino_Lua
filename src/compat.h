/*
 * compatiblity layer with STM arm libraries 
 * fix missing function definitions used for lua library
 */

#ifndef arm_h
#define arm_h

#include "Arduino.h"
#include "sys/times.h"
#include <cerrno>

extern "C" {
    int _gettimeofday(struct timeval *tv, struct timezone *tz);
    int _open(const char* pathname, int flags, mode_t mode);
    clock_t _times(struct tms* tms);
}


#endif
