#ifndef GEOSHAPESP_H_
#define GEOSHAPESP_H_

#define GEOSHAPES_PLUS() {\
	Square sqr;\
	Rectangle rect;\
	Circle circ;\
									\
	set_square(&sqr, 18);\
	set_rectangle(&rect, 12, 32);\
	set_circle(&circ, 24);\
									\
	print_test_header("GeoShapes+ Test");\
	cltext_f("Perimeter (Square)", square_perim(&sqr), 0);\
	cltext_f("Perimeter (Rectangle)", rectangle_perim(&rect), 0);\
	cltext_f("Circle Circumference", circle_circ(&circ), 1);\
}

#endif // GEOSHAPESP_H_
