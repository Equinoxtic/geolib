#ifndef GEOMFORMULAS_H_
#define GEOMFORMULAS_H_

#define GEOMFORMULAS() {									\
	print_test_header("Geometrical Formulas test");			\
	cltext_f("Square", area_square(12), 0);					\
	cltext_f("Rectangle", area_rect(12, 24), 0);			\
	cltext_f("Circle", area_circle(16), 0);					\
	cltext_f("Triangle", area_triangle(13, 18), 0);			\
	cltext_f("Trapezoid", area_trapezoid(24, 12), 1);		\
}

#endif // GEOMFORMULAS_H_
