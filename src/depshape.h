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

#endif // DEPSHAPE_H_
