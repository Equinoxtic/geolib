#ifndef COMMANDLINEGUI_H_
#define COMMANDLINEGUI_H_

#define CLIGUI() {\
	print_test_header("\"CLIgui\" API Test");\
	header_create("Test header small", 1);\
	header_create("Test header big", 0);\
	cltext_f("Float", 2.3f, 0);\
	cltext_s("String", "Hello, World!", 1);\
}

#endif // COMMANDLINEGUI_H_
