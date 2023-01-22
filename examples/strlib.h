#ifndef STRLIB_H_
#define STRLIB_H_

#define STRINGLIB() {\
	char *str_p = "Hello!";\
			\
	print_test_header("String Comparison");\
			\
	if (stringcompare(str_p, "Hello!")) {\
		printf("\nRES: %s\n", str_p);\
	} else {\
		printf("\nFAILED\n");\
	}\
			\
	print_test_header("String upper and lower case");\
	cltext_s("Uppercase", stringupper(str_p), 0);\
	cltext_s("Lowercase", stringlower(str_p), 1);\
}

#endif // STRLIB_H_
