#include "./geocore.h"
#include "./geosimpcore.h"

float area_square(float side)
{
	if (is_posf(side))
		return (expo_f(side, 2));
}

float perim_square(float side)
{
	if (is_posf(side))
		return (multf(4, side));
}

float area_rect(float l, float w)
{
	if (is_posf(l) && is_posf(w))
		return (multf(l, w));
}

float perim_rect(float l, float w)
{
	if (is_posf(l) && is_posf(w))
		return (multf(2, addf(l, w)));
}

float area_circle(float r)
{
	if (is_posf(r))
		return (multf(pi(), expo_f(r, 2)));
}

float circ_circle(float r)
{
	if (is_posf(r))
		return (multf(2, pi()) * r);
}

float area_triangle(float b, float h)
{
	if (is_posf(b) && is_posf(h))
		return (divi(1, 2) * multf(b, h));
}

float area_trapezoid(float b, float h)
{
	if (is_posf(b) && is_posf(h))
		return (divi(1, 2) * addf(b, b) * h);
}
