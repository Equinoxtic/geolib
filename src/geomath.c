#include "./geocore.h"
#include "./geosimpcore.h"

float area_square(float side)
{
	return (expo_f(side, 2));
}

float area_rect(float l, float w)
{
	return (multf(l, w));
}

float area_circle(float r)
{
	return (multf(pi(), expo_f(r, 2)));
}
