#ifndef GEOCORE_H_
#define GEOCORE_H_

#include<stdint.h>
#include<stdbool.h>

bool is_posn(int n);
bool is_posf(float n);
bool is_negn(int n);
bool is_negf(float n);
int expo_n(int n, uint32_t expo);
float expo_f(float n, uint32_t pwr);
float pi();
double pi_d();
// float gsqrt(float n);

#endif // GEOCORE_H_
