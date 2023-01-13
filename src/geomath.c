#include "./geocore.h"
#include "./geosimpcore.h"

float area_square(float side)
{
	if (is_posf(side) != 0) {
		return (expo_f(side, 2));
	}
}

float area_rect(float l, float w)
{
	if (is_posf(l) != 0 && is_posf(w) != 0) {
		return (multf(l, w));
	}
}

float area_circle(float r)
{
	return (multf(pi(), expo_f(r, 2)));
}

float area_triangle(float b, float h)
{
	return (divi(1, 2) * multf(b, h));
}
