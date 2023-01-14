#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_LEN 1000

void write_file(const char* f_path, const char* content_s)
{
	FILE *f = fopen(f_path, "w");
	if (f == NULL)
		fclose(f);
	fprintf(f, "%s", content_s);
	fclose(f);
}

void append_file(const char* f_path, const char* s)
{
	FILE *f = fopen(f_path, "a");
	if (f == NULL)
		fclose(f);
	fprintf(f, "%s\n", s);
	fclose(f);
}

char* read_file(const char* f_path)
{
	FILE    *f;
    char    *text;
    long    numbytes;
     
    f = fopen(f_path, "r");
    if (f == NULL)
        fclose(f);
     
    fseek(f, 0L, SEEK_END);
    numbytes = ftell(f);
    fseek(f, 0L, SEEK_SET);  
 
    text = (char*)calloc(numbytes, sizeof(char));   
    if (text == NULL)
		fclose(f);
 
    fread(text, sizeof(char), numbytes, f);
    fclose(f);

    return text;
}
