#ifndef GEOMFORMULASP_H_
#define GEOMFORMULASP_H_


#define GEOMFORMULAS_PLUS() {\
	print_test_header("Geometric Formulas+ Test");\
	cltext_f("Perimeter (Square)", perim_square(23), 0);\
	cltext_f("Perimeter (Rectangle)", perim_rect(14, 26), 0);\
	cltext_f("Circle Circumference", circ_circle(35), 1);\
}

#endif // GEOMFORMULASP_H_
