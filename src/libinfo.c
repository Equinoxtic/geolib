#include<stdio.h>
#include<string.h>

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
	// TODO: Implement file library for reading files
}

char* get_info_from_string(const char* t_info)
{
	if (strcmp(t_info, "name") == 0) {
		return get_name();
	} else if (strcmp(t_info, "version") == 0) {
		return get_version();
	}
}

void out_info_from_string(const char* t_info)
{
	get_info_from_string(t_info);
}
