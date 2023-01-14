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

void multi_operation_test()
{
	print_test_header("Simple Operations Test");
	printf("\n[Addition]: %g", addf(1.25, 3.15));
	printf("\n[Subtraction]: %g", subf(5.35, 7.54));
	printf("\n[Multiplication]: %g", multf(pi(), 12));
	printf("\n[Division]: %g\n", divi(1, 4));
	printf("[Multi-Operation]: %g\n",
			addf	(	55,
			subf	(	23.5,
			multf	(	32.12,
			divi	(	14.2, 20.3
	)))));
}

void geom_formulas_test()
{
	print_test_header("Geometrical Formulas test");
	printf("\n[Square]: %g", area_square(12));
	printf("\n[Rectangle]: %g", area_rect(12, 24));
	printf("\n[Circle]: %g", area_circle(16));
	printf("\n[Triangle]: %g", area_triangle(13, 18));
	printf("\n[Trapezoid]: %g\n", area_trapezoid(24, 12));
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
	printf("\n[Square]: %g", square(&sqr));
	printf("\n[Rectangle]: %g", rectangle(&rect));
	printf("\n[Circle]: %g", circle(&circ));
	printf("\n[Triangle]: %g", triangle(&trig));
	printf("\n[Trapezoid]: %g\n", trapezoid(&trpz));
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
		printf("\n# Positive Outputs\n");
		printf("\n> %g\n> %g\n> %g\n", pi(), multf(2.5, 7.35), area_circle(4));
	}
	else
	{
		printf("\n# Negative Outputs\n");
		printf("\n> %g\n> %g\n> %g\n", multf(1.75, 4.63), area_triangle(12.2, 5.43), multf(pi(), 4));
	}
}

void geomformula_plus_test()
{
	print_test_header("Geometric Formulas+ Test");
	printf("\n[Perimeter (Square)]: %g", perim_square(23));
	printf("\n[Perimeter (Rectangle)]: %g", perim_rect(14, 26));
	printf("\n[Circle Circumference]: %g\n", circ_circle(35));
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
	printf("\n[Perimeter (Square)]: %g", square_perim(&sqr));
	printf("\n[Perimeter (Rectangle)]: %g", rectangle_perim(&rect));
	printf("\n[Circle Circumference]: %g\n", circle_circ(&circ));
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
	printf("\n[Uppercase]: %s", stringupper(str_p));
	printf("\n[Lowercase]: %s\n", stringlower(str_p));
}

void gio_tests()
{
	const char* p_str = "Lorem Ipsum dolor sit amet";
	char sp_str[32];
	const char* p_margstr = "~";
	char sp_margstr[2];

	print_test_header("gIO Test");
	
	printf("\n# Print text 10 times\n");
	memset(sp_str, '\0', sizeof(sp_str));
	strncpy(sp_str, "Lorem Ipsum dolor sit amet\n", sizeof(sp_str));
	gput(sp_str, 10);

	printf("\n\n# Print margined text 5 times\n");
	memset(sp_str, '\0', sizeof(sp_margstr));
	strncpy(sp_margstr, "~\n", sizeof(sp_margstr));
	gputmarg(p_str, p_margstr, sp_margstr, 5);
}

void libinfo_test()
{
	print_test_header("\"libinfo\" Test");

	printf("\n> %s : %s", get_info_from_string("name"), 
						  get_info_from_string("version"));
	printf("\n[Version] > %s\n", get_info_from_string("version"));
	// printf("\n[Release] > %s\n", get_info_from_string("release"));
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
	
	multi_operation_test();		print_test_passed("Simple Operation Test");				nsleep(def_ms);
	geom_formulas_test();		print_test_passed("Geometric Formulas");				nsleep(def_ms);
	geoshapes_test();			print_test_passed("GeoShapes Test");					nsleep(def_ms);
	neg_and_pos_test(2.3f);		print_test_passed("Negative and Positive outputs");		nsleep(def_ms);
	sleep_stress_test();		print_test_passed("Sleep Stress");						nsleep(def_ms);
	geomformula_plus_test();	print_test_passed("Geometric Formulas+");				nsleep(def_ms);
	geoshapes_plus_test();		print_test_passed("GeoShapes+");						nsleep(def_ms);
	stringlib_test();			print_test_passed("StringLib");							nsleep(def_ms);
	gio_tests();				print_test_passed("gIO Test");							nsleep(def_ms);
	libinfo_test();				print_test_passed("\"libinfo\" Test");					nsleep(def_ms);

	print_all_test_passed();

	return 0;
}

