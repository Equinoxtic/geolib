#ifndef GFILE_H_
#define GFILE_H_

void write_file(const char* f_path, const char* content_s);
void append_file(const char* f_path, const char* s);
char* read_file(const char* f_path);

#endif // GFILE_H_
