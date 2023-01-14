#include<stdio.h>
#include<stdlib.h>

#include "./src/shape.h"
#include "./src/geomath.h"
#include "./src/geoshape.h"
#include "./src/geocore.h"
#include "./src/geosimpcore.h"
#include "./src/sleep.h"
#include "./src/testutils.h"

void multi_operation_test()
{
	printf("\n[Multi-Operation-Test]: %g\n", addf(15,
											 subf(7.5,
											 multf(2.5,
											 divi(5, 10)
	))));
}

void geom_formulas_test()
{
	printf("\n<Geometrical Formulas test>\n");
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

	printf("\n<GeoShapes test>\n");
	printf("\n[Square]: %g", square(&sqr));
	printf("\n[Rectangle]: %g", rectangle(&rect));
	printf("\n[Circle]: %g", circle(&circ));
	printf("\n[Triangle]: %g", triangle(&trig));
	printf("\n[Trapezoid]: %g\n", trapezoid(&trpz));
}

void sleep_stress_test()
{
	printf("\n<Sleep Test>\n\n");
	for (int i = 0; i < 3; i++) {
		printf("[Sleep (%d)]\n", i+1);
		sleep(1);
	}
}

void neg_and_pos_test(float val)
{
	printf("\n<Negative and Positive checking test>\n");
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
	printf("\n<Geometric Formulas+ Test>\n");
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
	
	printf("\n<GeoShapes+ Test>\n");
	printf("\n[Perimeter (Square)]: %g", square_perim(&sqr));
	printf("\n[Perimeter (Rectangle)]: %g", rectangle_perim(&rect));
	printf("\n[Circle Circumference]: %g\n", circle_circ(&circ));
}

int main(int argc, char **argv)
{
	unsigned def_ms = 1750;

	printf("\n> Running tests...\n");
	
	multi_operation_test();		print_test_passed("Multi-Operation-Test");				nsleep(def_ms);
	geom_formulas_test();		print_test_passed("Geometric Formulas");				nsleep(def_ms);
	geoshapes_test();			print_test_passed("GeoShapes Test");					nsleep(def_ms);
	neg_and_pos_test(2.3f);		print_test_passed("Negative and Positive outputs");		nsleep(def_ms);
	sleep_stress_test();		print_test_passed("Sleep Stress");						nsleep(def_ms);
	geomformula_plus_test();	print_test_passed("Geometric Formulas+");				nsleep(def_ms);
	geoshapes_plus_test();		print_test_passed("GeoShapes+");						nsleep(def_ms);

	print_all_test_passed();

	return 0;
}

