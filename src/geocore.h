#ifndef GEOCORE_H_
#define GEOCORE_H_

#include<stdint.h>

int is_posn(int n);
int is_posf(float n);
int is_negn(int n);
int is_negf(float n);
int expo_n(int n, uint32_t expo);
float expo_f(float n, uint32_t pwr);
float pi();
double pi_d();

#endif // GEOCORE_H_
