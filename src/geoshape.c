#include<string.h>
#include "./geoshape.h"
#include "./geomath.h"
#include "./geocore.h"
#include "./geosimpcore.h"

void set_square(Square *_square, 
				float n_side)
{
	if (is_posf(n_side)) _square->side = n_side;
}

void set_rectangle(Rectangle *_rect,
				   float n_len,
				   float n_wid)
{
	if (is_posf(n_len) && is_posf(n_wid))
	{
		_rect->length = n_len;
		_rect->width = n_wid;
	}
}

void set_circle(Circle *_circle,
				float n_rad)
{
	if (is_posf(n_rad)) _circle->rad = n_rad;
}

void set_triangle(Triangle *_triangle,
				  float n_base,
				  float n_height)
{
	if (is_posf(n_base) && is_posf(n_height))
	{
		_triangle->base = n_base;
		_triangle->height = n_height;
	}
}

float square(Square *_square)
{
	float res = 0;
	
	if (is_posf(_square->side)) {
		res = expo_f(_square->side, 2);
	} else {
		res = 0;
	}

	_square->area = res;

	return res;
}

float rectangle(Rectangle *_rect)
{
	float res = 0;

	if (is_posf(_rect->length) && is_posf(_rect->width)) {
		res = multf(_rect->length, _rect->width);
	} else {
		res = 0;
	}
	
	_rect->area = res;

	return res;
}

float circle(Circle *_circle)
{
	float res = 0;

	if (is_posf(_circle->rad)) {
		res = multf(pi(), expo_f(_circle->rad, 2));
	} else {
		res = 0;
	}

	_circle->area = res;

	return res;
}

float triangle(Triangle *_triangle)
{
	float res = 0;

	if (is_posf(_triangle->base) && is_posf(_triangle->height)) {
		res = divi(1, 2) * multf(_triangle->base, _triangle->height);
	} else {
		res = 0;
	}

	_triangle->area = res;

	return res;
}
