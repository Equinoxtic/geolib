#ifndef GEOIO_H_
#define GEOIO_H_

#define GEOIO_SAMPLE() {\
	char p_str[64];\
	\
	print_test_header("gIO Test");\
	\
	print_test_subheader("Print text 10 times");\
	strncpy(p_str, "Lorem Ipsum dolor sit amet\n", sizeof(p_str));\
	gput(p_str, 10);\
	\
	print_test_subheader("Print margined text 5 times");\
	strncpy(p_str, "Lorem Ipsum dolor sit amet", sizeof(p_str));\
	gputmarg(p_str, "~", "~\n", 5);\
}

#endif // GEOIO_H_
