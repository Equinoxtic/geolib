#ifndef GEOSHAPE_H_
#define GEOSHAPE_H_

#include "./shape.h"

void set_square(Square *_square, float n_side);
void set_rectangle(Rectangle *_rect, float n_len, float n_wid);
void set_circle(Circle *_circle, float n_rad);
void set_triangle(Triangle *_triangle, float n_base, float n_height);
void set_trapezoid(Trapezoid *_trapezoid, float n_base, float n_height);

float square(Square *_square);
float square_perim(Square *_square);
float rectangle(Rectangle *_rectangle);
float rectangle_perim(Rectangle *_rectangle);
float circle(Circle *_circle);
float circle_circ(Circle *_circle);
float triangle(Triangle *_triangle);
float trapezoid(Trapezoid *_trapezoid);

#endif // GEOSHAPE_H_
