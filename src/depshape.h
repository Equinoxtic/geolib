/* DEP Shapes Info
 * DEP / Depth Shapes are basically just 3D Shapes.
 * They have their own respective formulas just like the regular shapes.
*/

#ifndef DEPSHAPE_H_
#define DEPSHAPE_H_

typedef struct {
	float alti;
	float hypo;
	float base;
	float perim;
	float area;
	float height;
} DEP_Triangle;

typedef struct {
	float length;
	float width;
	float perim;
	float area;
	float diag;
} DEP_Rectangle;

typedef struct {
	float _side_a;
	float _side_b;
	float _paralg_height;
	float perim;
	float area;
	float height;
	float base;
} Parallelogram;

typedef struct {
	float side;
	float area;
	float volume;
	float edge;
	float s_diag;
} Cube;

typedef struct {
	float side_a;
	float side_b;
	float dist;
	float area;
	float height;
	float base;
} Trapezium;

#endif // DEPSHAPE_H_
