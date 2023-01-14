#include<stdio.h>
#include "./gio.h"

void print_test_header(const char* s_test)
{
	#ifdef IODEBUG
	printf("\n> DEBUG TEST: [%s]\n", s_test);
	#else
	gputmarg(s_test, "\n<", ">\n", 1);
	#endif
}

void print_test_passed(const char* s_test)
{
	printf("(*) - Test Passed: %s\n", s_test);
}

void print_all_test_passed()
{
	printf("\n> All tests passed!\n");
}
