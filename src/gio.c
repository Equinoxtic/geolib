#include<stdio.h>

void gput(const char* _str, int times)
{
	for (int i = 1; i <= times; ++i) {
		#ifdef IODEBUG
		if (i < 10)
			printf("000%d\t|\t%s", i,_str);
		else if (i > 9)
			printf("00%d\t|\t%s", i,_str);
		else if (i > 99)
			printf("0%d\t|\t%s", i, _str);
		else if (i > 999)
			printf("%d\t|\t%s", i, _str);
		#else
		printf("%s", _str);
		#endif
	}
}

void gputmarg(const char* _str, const char* _a, const char* _b, int times)
{
	for (int i = 1; i <= times; ++i) {
		#ifdef IODEBUG
		if (i < 10)
			printf("000%d\t|\t%s%s%s", i, _a, _str, _b);
		else if (i > 9)
			printf("00%d\t|\t%s%s%s", i, _a, _str, _b);
		else if (i > 99)
			printf("0%d\t|\t%s%s%s", i, _a, _str, _b);
		else if (i > 999)
			printf("%d\t|\t%s%s%s", i, _a, _str, _b);
		#else
		printf("%s%s%s", _a, _str, _b);
		#endif
	}
}
