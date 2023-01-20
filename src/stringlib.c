#include<stdbool.h>
#include<ctype.h>
#include<string.h>

bool stringcompare(char *_a, char *_b)
{
	return (strcmp(_a, _b) == 0);
}

char* stringlower(char *_str)
{
	_str = strdup(_str);
	for (char *p_str = _str; *p_str; ++p_str)
		*p_str = tolower(*p_str);
	return _str;
}

char* stringupper(char *_str)
{
	_str = strdup(_str);
	for (char *p_str = _str; *p_str; ++p_str)
		*p_str = toupper(*p_str);
	return _str;
}

