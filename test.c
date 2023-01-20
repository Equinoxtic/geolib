#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "./src/shape.h"
#include "./src/geomath.h"
#include "./src/geoshape.h"
#include "./src/geocore.h"
#include "./src/geosimpcore.h"
#include "./src/sleep.h"
#include "./src/gio.h"
#include "./src/stringlib.h"
#include "./src/testutils.h"
#include "./src/libinfo.h"
#include "./src/cligui.h"
#include "./src/depshape.h"

void multi_operation_test()
{
	print_test_header("Simple Operations Test");
	cltext_f("Addition", addf(1.25, 3.15), 0);
	cltext_f("Subtraction", subf(5.35, 7.54), 0);
	cltext_f("Multiplication", multf(pi(), 12), 0);
	cltext_f("Division", divi(1, 4), 0);
	cltext_f("Multi-Operation",
			addf	(	55,
			subf	(	23.5,
			multf	(	32.12,
			divi	(	14.2, 20.3
	)))), 1);
}

void geom_formulas_test()
{
	print_test_header("Geometrical Formulas test");
	cltext_f("Square", area_square(12), 0);
	cltext_f("Rectangle", area_rect(12, 24), 0);
	cltext_f("Circle", area_circle(16), 0);
	cltext_f("Triangle", area_triangle(13, 18), 0);
	cltext_f("Trapezoid", area_trapezoid(24, 12), 1);
}

void geoshapes_test()
{
	Square sqr;
	Rectangle rect;
	Circle circ;
	Triangle trig;
	Trapezoid trpz;

	set_square(&sqr, 4);
	set_rectangle(&rect, 6, 3);
	set_circle(&circ, 7);
	set_triangle(&trig, 8, 4);
	set_trapezoid(&trpz, 4, 10);

	print_test_header("GeoShapes test");
	cltext_f("Square", square(&sqr), 0);
	cltext_f("Rectangle", rectangle(&rect), 0);
	cltext_f("Circle", circle(&circ), 0);
	cltext_f("Triangle", triangle(&trig), 0);
	cltext_f("Trapezoid", trapezoid(&trpz), 1);
}

void sleep_stress_test()
{
	print_test_header("Sleep Test"); printf("\n");
	for (int i = 0; i < 3; i++) {
		printf("[Sleep (%d)]\n", i+1);
		#ifdef QUICK_TEST
		nsleep(350);
		#else
		sleep(1);
		#endif
	}
}

void neg_and_pos_test(float val)
{
	print_test_header("Negative and Positive checking test");
	if (is_posf(val))
	{
		print_test_subheader("Positive Outputs");
		cltext_f("Pi", pi(), 0);
		cltext_f("Product", multf(2.35, 4.35), 0);
		cltext_f("Circle", area_circle(6), 1);
	}
	else
	{
		print_test_subheader("Negative Outputs");
		cltext_f("Product", multf(2.25, 5.32), 0);
		cltext_f("Triangle", area_triangle(13.4, 7.32), 0);
		cltext_f("Square", area_square(16), 1);
	}
}

void geomformula_plus_test()
{
	print_test_header("Geometric Formulas+ Test");
	cltext_f("Perimeter (Square)", perim_square(23), 0);
	cltext_f("Perimeter (Rectangle)", perim_rect(14, 26), 0);
	cltext_f("Circle Circumference", circ_circle(35), 1);
}

void geoshapes_plus_test()
{
	Square sqr;
	Rectangle rect;
	Circle circ;
	
	set_square(&sqr, 18);
	set_rectangle(&rect, 12, 32);
	set_circle(&circ, 24);
	
	print_test_header("GeoShapes+ Test");
	cltext_f("Perimeter (Square)", square_perim(&sqr), 0);
	cltext_f("Perimeter (Rectangle)", rectangle_perim(&rect), 0);
	cltext_f("Circle Circumference", circle_circ(&circ), 1);
}

void stringlib_test()
{
	char *str_p = "Hello!";

	print_test_header("String Comparison");
	
	if (stringcompare(str_p, "Hello!")) {
		printf("\nRES: %s\n", str_p);
	} else {
		printf("\nFAILED\n");
	}

	print_test_header("String upper and lower case");
	cltext_s("Uppercase", stringupper(str_p), 0);
	cltext_s("Lowercase", stringlower(str_p), 1);
}

void gio_tests()
{
	char p_str[64];

	print_test_header("gIO Test");

	print_test_subheader("Print text 10 times");
	strncpy(p_str, "Lorem Ipsum dolor sit amet\n", sizeof(p_str));
	gput(p_str, 10);

	print_test_subheader("Print margined text 5 times");
	strncpy(p_str, "Lorem Ipsum dolor sit amet", sizeof(p_str));
	gputmarg(p_str, "~", "~\n", 5);
}

void libinfo_test()
{
	print_test_header("\"libinfo\" Test");
	printf("\n> %s : %s", get_info_from_string("name"), get_info_from_string("version"));
	printf("[Version] > %s", get_info_from_string("version"));
	printf("[Release] > release-%s", get_info_from_string("release"));
}

void cligui_test()
{
	print_test_header("\"CLIgui\" API Test");
	header_create("Test header small", 1);
	header_create("Test header big", 0);
	cltext_f("Float", 2.3f, 0);
	cltext_s("String", "Hello, World!", 1);
}

void dep_shapes_test()
{
	Cube cube;
	DEP_Triangle tri;
	DEP_Rectangle rect;
	Parallelogram para;
	Trapezium trpz;

	print_test_header("DEP (3D) Shapes Test");

	// Cube
	set_cube(&cube, 4, 43);
	
	print_test_subheader("Cube");
	cltext_f("Area", cube_area(&cube), 0);
	cltext_f("Volume", cube_volume(&cube), 0);
	cltext_f("Edge", cube_edge(&cube), 0);
	cltext_f("Space Diagonal", cube_sdiag(&cube), 1);
	
	// Triangle
	set_dep_triangle(&tri, 2, 5, 6);

	print_test_subheader("Triangle");
	cltext_f("Perimeter", dep_triangle_perim(&tri), 0);
	cltext_f("Area", dep_triangle_area(&tri), 0);
	cltext_f("Height", dep_triangle_height(&tri), 1);
	
	// Rectangle
	set_dep_rectangle(&rect, 15, 10);

	print_test_subheader("Rectangle");
	cltext_f("Perimeter", dep_rectangle_perim(&rect), 0);
	cltext_f("Area", dep_rectangle_area(&rect), 0);
	cltext_f("Height", dep_rectangle_diag(&rect), 1);

	// Parallelogram
	set_parallelg(&para, 20, 21, 9);

	print_test_subheader("Parallelogram");
	cltext_f("Perimeter", parallelg_perim(&para), 0);
	cltext_f("Area", parallelg_area(&para), 0);
	cltext_f("Height", parallelg_height(&para), 0);
	cltext_f("Base", parallelg_base(&para), 1);

	// Trapezium
	set_trapezium(&trpz, 13, 18, 24);

	print_test_subheader("Trapezium");
	cltext_f("Area", trapezium_area(&trpz), 0);
	cltext_f("Height", trapezium_height(&trpz), 0);
	cltext_f("Base", trapezium_height(&trpz), 1);
}

void run_tests(unsigned int def_ms)
{
	#ifdef TEST_MULTIOPERATION
	multi_operation_test();		print_test_passed("Simple Operation Test");				nsleep(def_ms);
	#endif

	#ifdef TEST_GEOMFORMS	
	geom_formulas_test();		print_test_passed("Geometric Formulas");				nsleep(def_ms);
	#endif	
	
	#ifdef TEST_GEOSHAPES
	geoshapes_test();			print_test_passed("GeoShapes Test");					nsleep(def_ms);
	#endif	
	
	#ifdef TEST_NEGANDPOS
	neg_and_pos_test(2.3f);		print_test_passed("Negative and Positive outputs");		nsleep(def_ms);
	#endif	

	#ifdef TEST_SLEEP
	sleep_stress_test();		print_test_passed("Sleep Stress");						nsleep(def_ms);
	#endif
	
	#ifdef TEST_GEOMFORMP
	geomformula_plus_test();	print_test_passed("Geometric Formulas+");				nsleep(def_ms);
	#endif

	#ifdef TEST_GEOSHAPEP
	geoshapes_plus_test();		print_test_passed("GeoShapes+");						nsleep(def_ms);
	#endif

	#ifdef TEST_LIBSTRING
	stringlib_test();			print_test_passed("StringLib");							nsleep(def_ms);
	#endif

	#ifdef TEST_GIO
	gio_tests();				print_test_passed("gIO Test");							nsleep(def_ms);
	#endif

	#ifdef TEST_INFOLIB
	libinfo_test();				print_test_passed("\"libinfo\" Test");					nsleep(def_ms);
	#endif

	#ifdef TEST_CLIGUI
	cligui_test();				print_test_passed("Command Line GUI Test");				nsleep(def_ms);
	#endif

	#ifdef TEST_DEPSHAPES
	dep_shapes_test();			print_test_passed("DEP / 3D Shapes Test");				nsleep(def_ms);
	#endif
}

int main(int argc, char **argv)
{
	unsigned def_ms = 0;

	#ifdef QUICK_TEST
	def_ms = 450;
	#else
	def_ms = 1250;
	#endif

	#ifdef IODEBUG
	printf("\n---< DEBUG MODE >---\n");
	#endif

	printf("\n> Running tests...\n");

	run_tests(def_ms);

	print_all_test_passed();

	return 0;
}

