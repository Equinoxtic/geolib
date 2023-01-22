#ifndef STRESS_SLEEP_H_
#define STRESS_SLEEP_H_

#define STRESS_SLEEP(ms) {\
	print_test_header("Sleep Test"); printf("\n");\
	for (int i = 0; i < 3; ++i) {\
		printf("[Sleep (%d)]\n", i+1);\
		nsleep(ms);\
	}\
}

#endif // STRESS_SLEEP_H_
