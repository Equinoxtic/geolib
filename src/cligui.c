#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "./stringlib.h"
#include "./gio.h"

void header_create(char *_name, int s_name)
{
	char fname[64];

	if (s_name == 1)
		strncpy(fname, _name, sizeof(fname));
	else if (s_name == 0)
		strncpy(fname, stringupper(_name), sizeof(fname));

	gputmarg(fname, "\n-----< ", " >-----\n", 1);
}

void cltext_f(const char *txt, float v, int nl)
{
	char nl_string[4];

	if (nl == 1)
		strncpy(nl_string, "\n", sizeof(nl_string));
	else
		memset(nl_string, '\0', sizeof(nl_string));

	printf("\n[%s]: %g%s", txt, v, nl_string);
}

void cltext_s(const char *txt, char *v, int nl)
{
	char nl_string[4];

	if (nl == 1)
		strncpy(nl_string, "\n", sizeof(nl_string));
	else
		memset(nl_string, '\0', sizeof(nl_string));

	printf("\n[%s]: %s%s", txt, v, nl_string);
}

