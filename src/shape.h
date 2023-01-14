#ifndef SHAPE_H_
#define SHAPE_H_

typedef struct {
	float side;
	float area;
	float perim;
} Square;

typedef struct {
	float length;
	float width;
	float area;
	float perim;
} Rectangle;

typedef struct {
	float radius;
	float circ;
	float area;
} Circle;

typedef struct {
	float base;
	float height;
	float area;
} Triangle;

typedef struct {
	float base;
	float height;
	float area;
} Trapezoid;

#endif // SHAPE_H_
