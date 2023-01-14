# Flags
# -DQUICK_TEST
# -DIODEBUG

CCFLAGS+= -DQUICK_TEST

SRC=	src/geocore.c 			\
		src/geosimpcore.c 		\
		src/geoshape.c 			\
		src/sleep.c 			\
		src/gio.c 				\
		src/stringlib.c 		\
		src/testutils.c 		\
		src/libinfo.c 			\
		src/geomath.c

geolib:
	gcc $(CCFLAGS) -o geolib test.c $(SRC)
