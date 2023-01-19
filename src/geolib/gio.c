#include<stdio.h>

void gput(const char* _str, int times)
{
	for (int i = 1; i <= times; ++i) {
		printf("%s", _str);
	}
}

void gputmarg(const char* _str, const char* _a, const char* _b, int times)
{
	for (int i = 1; i <= times; ++i) {
		printf("%s%s%s", _a, _str, _b);
	}
}
