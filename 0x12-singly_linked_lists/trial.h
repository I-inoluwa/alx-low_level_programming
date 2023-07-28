#ifndef TRIAL_H
#define TRIAL_H

#include <stdio.h>

void before_main(void) __attribute__((constructor));
void print_message(void);
int main(void);

#endif
