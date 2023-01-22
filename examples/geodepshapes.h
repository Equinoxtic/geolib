#ifndef GEODEPSHAPES_H_
#define GEODEPSHAPES_H_

#define DEP_SHAPES() {\
	Cube cube;\
	DEP_Triangle tri;\
	DEP_Rectangle rect;\
	Parallelogram para;\
	Trapezium trpz;\
	\
	print_test_header("DEP (3D) Shapes Test");\
	\
	set_cube(&cube, 4, 43);\
	\
	print_test_subheader("Cube");\
	cltext_f("Area", cube_area(&cube), 0);\
	cltext_f("Volume", cube_volume(&cube), 0);\
	cltext_f("Edge", cube_edge(&cube), 0);\
	cltext_f("Space Diagonal", cube_sdiag(&cube), 1);\
	\
	set_dep_triangle(&tri, 2, 5, 6);\
	\
	print_test_subheader("Triangle");\
	cltext_f("Perimeter", dep_triangle_perim(&tri), 0);\
	cltext_f("Area", dep_triangle_area(&tri), 0);\
	cltext_f("Height", dep_triangle_height(&tri), 1);\
	\
	set_dep_rectangle(&rect, 15, 10);\
	\
	print_test_subheader("Rectangle");\
	cltext_f("Perimeter", dep_rectangle_perim(&rect), 0);\
	cltext_f("Area", dep_rectangle_area(&rect), 0);\
	cltext_f("Height", dep_rectangle_diag(&rect), 1);\
	\
	set_parallelg(&para, 20, 21, 9);\
	\
	print_test_subheader("Parallelogram");\
	cltext_f("Perimeter", parallelg_perim(&para), 0);\
	cltext_f("Area", parallelg_area(&para), 0);\
	cltext_f("Height", parallelg_height(&para), 0);\
	cltext_f("Base", parallelg_base(&para), 1);\
	\
	set_trapezium(&trpz, 13, 18, 24);\
	\
	print_test_subheader("Trapezium");\
	cltext_f("Area", trapezium_area(&trpz), 0);\
	cltext_f("Height", trapezium_height(&trpz), 0);\
	cltext_f("Base", trapezium_height(&trpz), 1);\
}

#endif // GEODEPSHAPES_H_
