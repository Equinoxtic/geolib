#include<stdio.h>
#include<stdlib.h>
#include "./src/geomath.h"
#include "./src/geocore.h"
#include "./src/geosimpcore.h"
#include "./src/sleep.h"

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
	printf("\n[Triangle]: %g\n", area_triangle(13, 18));
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

int main(int argc, char **argv)
{
	printf("\n> Running tests...\n");
	
	multi_operation_test();
	geom_formulas_test();
	neg_and_pos_test(2.3f);
	sleep_stress_test();
	
	return 0;
}

