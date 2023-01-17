#ifndef GEOMATH_H_
#define GEOMATH_H_

// Shapes (Regular)
float area_square(float side);
float perim_square(float side);
float area_rect(float l, float w);
float perim_rect(float l, float w);
float area_circle(float r);
float circ_circle(float r);
float area_triangle(float b, float h);
float area_trapezoid(float b, float h);

// Shapes (3D)
float perim_dep_triangle(float a, float b, float c);
float area_dep_triangle(float b, float h);
float height_dep_triangle(float area, float b);

float perim_dep_rect(float l, float w);
float area_dep_rect(float l, float w);
float diag_dep_rect(float l, float w);

float perim_paralgram(float a, float b);
float area_paralgram(float b, float h);
float height_paralgram(float area, float b);
float base_paralgram(float area, float h);

float area_cube(float a);
float volume_cube(float a);
float edge_cube(float volume);
float sdiag_cube(float a);

#endif // GEOMATH_H_
