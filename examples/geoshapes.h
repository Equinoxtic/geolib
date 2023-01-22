#ifndef GEOSHAPES_H_
#define GEOSHAPES_H_

#define GEOSHAPES() {									\
	Square sqr;											\
	Rectangle rect;										\
	Circle circ;										\
	Triangle trig;										\
	Trapezoid trpz;										\
														\
	set_square(&sqr, 4);								\
	set_rectangle(&rect, 6, 3);							\
	set_circle(&circ, 7);								\
	set_triangle(&trig, 8, 4);							\
	set_trapezoid(&trpz, 4, 10);						\
														\
	print_test_header("GeoShapes test");				\
	cltext_f("Square", square(&sqr), 0);				\
	cltext_f("Rectangle", rectangle(&rect), 0);			\
	cltext_f("Circle", circle(&circ), 0);				\
	cltext_f("Triangle", triangle(&trig), 0);			\
	cltext_f("Trapezoid", trapezoid(&trpz), 1);			\
}

#endif // GEOSHAPES_H_
