#ifndef OPERATIONS_H_
#define OPERATIONS_H_

#define OPERATION_TEST() {								\
	print_test_header("Simple Operations Test");		\
	cltext_f("Addition", addf(1.25, 3.15), 0);			\
	cltext_f("Subtraction", subf(5.35, 7.54), 0);		\
	cltext_f("Multiplication", multf(pi(), 12), 0);		\
	cltext_f("Division", divi(1, 4), 0);				\
	cltext_f("Multi-Operation",							\
			addf	(	55,								\
			subf	(	23.5,							\
			multf	(	32.12,							\
			divi	(	14.2, 20.3						\
	)))), 1);											\
}

#endif // OPERATIONS_H_
