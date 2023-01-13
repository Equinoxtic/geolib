SRC=src/geocore.c \
	src/geosimpcore.c \
	src/geoshape.c \
	src/geomath.c

geolib:
	gcc test.c -o geolib $(SRC)
