#include "./geocore.h"
#include "./geosimpcore.h"

// Shapes (Regular)
float area_square(float side) {
	if (is_posf(side))
		return (expo_f(side, 2));
}

float perim_square(float side) {
	if (is_posf(side))
		return (multf(4, side));
}

float area_rect(float l, float w) {
	if (is_posf(l) && is_posf(w))
		return (multf(l, w));
}

float perim_rect(float l, float w) {
	if (is_posf(l) && is_posf(w))
		return (multf(2, addf(l, w)));
}

float area_circle(float r) {
	if (is_posf(r))
		return (multf(pi(), expo_f(r, 2)));
}

float circ_circle(float r) {
	if (is_posf(r))
		return (multf(2, pi()) * r);
}

float area_triangle(float b, float h) {
	if (is_posf(b) && is_posf(h))
		return (divi(1, 2) * multf(b, h));
}

float area_trapezoid(float b, float h) {
	if (is_posf(b) && is_posf(h))
		return (divi(1, 2) * addf(b, b) * h);
}



// Shapes (3D)
float perim_dep_triangle(float a, float b, float c) {
	if (is_posf(a) && is_posf(b) && is_posf(c))
		return (addf(a, b) + c);
}

float area_dep_triangle(float b, float h) {
	if (is_posf(b) && is_posf(h))
		return (multf(divi(1, 2), multf(b, h)));
}

float height_dep_triangle(float area, float b) {
	if (is_posf(area) && is_posf(b))
		return (multf(2, divi(area, b)));
}

float perim_dep_rect(float l, float w) {
	if (is_posf(l) && is_posf(w))
		return (multf(2, addf(l, w)));
}

float area_dep_rect(float l, float w) {
	if (is_posf(l) && is_posf(w))
		return (multf(l, w));
}

float diag_dep_rect(float l, float w) {
	if (is_posf(l) && is_posf(w))
		return (gsqrt(addf(expo_f(l, 2), expo_f(w, 2))));
}

float perim_paralgram(float a, float b) {
	if (is_posf(a) && is_posf(b))
		return (multf(2, addf(a, b)));
}

float area_paralgram(float b, float h) {
	if (is_posf(b) && is_posf(h))
		return (multf(b, h));
}

float height_paralgram(float area, float b) {
	if (is_posf(area) && is_posf(b))
		return (divi(area, b));
}


float base_paralgram(float area, float h) {
	if (is_posf(area) && is_posf(h))
		return (divi(area, h));
}

float area_cube(float a) {
	if (is_posf(a)) return (multf(6, expo_f(a, 2)));
}

float volume_cube(float a) {
	if (is_posf(a)) return (expo_f(a, 3));
}

float edge_cube(float volume) {
	if (is_posf(volume))
		return (multf(volume, divi(1, 3)));
}

float sdiag_cube(float a) {
	if (is_posf(a))
		return (multf(a, gsqrt(3)));
}
