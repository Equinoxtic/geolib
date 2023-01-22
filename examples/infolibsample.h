#ifndef INFOLIBSAMPLE_H_
#define INFOLIBSAMPLE_H_

#define INFOLIB() {\
	print_test_header("\"libinfo\" Test");\
	printf("\n> %s : %s", get_info_from_string("name"), get_info_from_string("version"));\
	printf("[Version] > %s", get_info_from_string("version"));\
	printf("[Release] > release-%s", get_info_from_string("release"));\
}

#endif // INFOLIBSAMPLE_H_
