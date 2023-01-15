#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "./gfile.h"

char* get_name()
{
	return "GeoLib (Geometric Library)";
}

char* get_version()
{
	return "v0.3";
}

char* get_release()
{
	char* gitfile;
	gitfile = read_file("gitv.txt");
	return gitfile; free(gitfile);
}

char* get_info_from_string(const char* t_info)
{
	if (strcmp(t_info, "name") == 0) {
		return get_name();
	} else if (strcmp(t_info, "version") == 0) {
		return get_version();
	} else if (strcmp(t_info, "release") == 0) {
		return get_release();
	}
}

void out_info_from_string(const char* t_info)
{
	get_info_from_string(t_info);
}
