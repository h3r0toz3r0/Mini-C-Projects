/**
 * @brief erase.h - header file for erase.c.
 */

// include guard
#ifndef ERASE_H
#define ERASE_H    

// libraries
#include <stdio.h>
#include "files.h"
#include "customer.h"

// macros 
#define ERASE_ERROR           -1
#define ERASE_SUCCESS          0

// declare functions
int erase(void);

#endif /* ERASE_H */