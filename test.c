#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "./examples/examples.h"

void run_tests(unsigned def_ms, unsigned sleep_ms)
{
	#ifdef TEST_MULTIOPERATION
	OPERATION_TEST();			print_test_passed("Simple Operation Test");				nsleep(def_ms);
	#endif

	#ifdef TEST_GEOMFORMS	
	GEOMFORMULAS();				print_test_passed("Geometric Formulas");				nsleep(def_ms);
	#endif
	
	#ifdef TEST_GEOSHAPES
	GEOSHAPES();				print_test_passed("GeoShapes Test");					nsleep(def_ms);
	#endif	
	
	#ifdef TEST_NEGANDPOS
	NEG_AND_POS(2.3f);			print_test_passed("Negative and Positive outputs");		nsleep(def_ms);
	#endif	

	#ifdef TEST_SLEEP
	STRESS_SLEEP(sleep_ms);		print_test_passed("Sleep Stress");						nsleep(def_ms);
	#endif

	#ifdef TEST_GEOMFORMP
	GEOMFORMULAS_PLUS();		print_test_passed("Geometric Formulas+");				nsleep(def_ms);
	#endif

	#ifdef TEST_GEOSHAPEP
	GEOSHAPES_PLUS();			print_test_passed("GeoShapes+");						nsleep(def_ms);
	#endif 

	#ifdef TEST_LIBSTRING
	STRINGLIB();				print_test_passed("StringLib");							nsleep(def_ms);
	#endif

	#ifdef TEST_GIO
	GEOIO_SAMPLE();				print_test_passed("gIO Test");							nsleep(def_ms);
	#endif

	#ifdef TEST_INFOLIB
	INFOLIB();					print_test_passed("\"libinfo\" Test");					nsleep(def_ms);
	#endif

	#ifdef TEST_CLIGUI
	CLIGUI();					print_test_passed("Command Line GUI Test");				nsleep(def_ms);
	#endif

	#ifdef TEST_DEPSHAPES
	DEP_SHAPES();				print_test_passed("DEP / 3D Shapes Test");				nsleep(def_ms);
	#endif
}

int main(int argc, char **argv)
{
	unsigned def_ms = 0;
	unsigned defsleep_ms = 0; 

	#ifdef QUICK_TEST
	def_ms = 450;
	defsleep_ms = 350;
	#else
	def_ms = 1250;
	defsleep_ms = 750;
	#endif

	#ifdef IODEBUG
	printf("\n---< DEBUG MODE >---\n");
	#endif

	printf("\n> Running tests...\n");

	run_tests(def_ms, defsleep_ms);

	print_all_test_passed();

	return 0;
}

