#ifndef NEGANDPOS_H_
#define NEGANDPOS_H_

#define NEG_AND_POS(val) {\
	print_test_header("Negative and Positive checking test");\
	if (is_posf(val))\
	{\
		print_test_subheader("Positive Outputs");\
		cltext_f("Pi", pi(), 0);\
		cltext_f("Product", multf(2.35, 4.35), 0);\
		cltext_f("Circle", area_circle(6), 1);\
	}\
	else\
	{\
		print_test_subheader("Negative Outputs");\
		cltext_f("Product", multf(2.25, 5.32), 0);\
		cltext_f("Triangle", area_triangle(13.4, 7.32), 0);\
		cltext_f("Square", area_square(16), 1);\
	}\
}

#endif // NEGANDPOS_H_
