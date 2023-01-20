#ifndef GEOSHAPE_H_
#define GEOSHAPE_H_

#include "./shape.h"
#include "./depshape.h"

// Regular Shapes
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

// 3D Shapes
void set_dep_triangle(DEP_Triangle *dtriangle,
					  float altitude,
					  float hypotenuse,
					  float base);
float dep_triangle_perim(DEP_Triangle *dtriangle);
float dep_triangle_area(DEP_Triangle *dtriangle);
float dep_triangle_height(DEP_Triangle *dtriangle);

void set_dep_rectangle(DEP_Rectangle *drect,
					   float length,
					   float width);
float dep_rectangle_perim(DEP_Rectangle *drect);
float dep_rectangle_area(DEP_Rectangle *drect);
float dep_rectangle_diag(DEP_Rectangle *drect);

void set_parallelg(Parallelogram *parallg,
					float side_a,
					float side_b,
					float para_height);
float parallelg_perim(Parallelogram *parallg);
float parallelg_area(Parallelogram *parallg);
float parallelg_height(Parallelogram *parallg);
float parallelg_base(Parallelogram *parallg);

void set_cube(Cube *cube,
			  float side,
			  float volume);
float cube_area(Cube *cube);
float cube_volume(Cube *cube);
float cube_edge(Cube *cube);
float cube_sdiag(Cube *cube);

void set_trapezium(Trapezium *trpz,
				   float sidea,
				   float sideb,
				   float distance);
float trapezium_area(Trapezium *trpz);
float trapezium_height(Trapezium *trpz);
float trapezium_base(Trapezium *trpz);

#endif // GEOSHAPE_H_
