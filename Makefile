# Flags
# -DQUICK_TEST
# -DIODEBUG
GCC = gcc
SRCDIR = src
SRC =	$(SRCDIR)/geocore.c 			\
		$(SRCDIR)/geosimpcore.c 		\
		$(SRCDIR)/geoshape.c 			\
		$(SRCDIR)/sleep.c 				\
		$(SRCDIR)/gfile.c				\
		$(SRCDIR)/gio.c 				\
		$(SRCDIR)/stringlib.c 			\
		$(SRCDIR)/testutils.c 			\
		$(SRCDIR)/libinfo.c 			\
		$(SRCDIR)/cligui.c				\
		$(SRCDIR)/geomath.c
CCFLAGS= -DQUICK_TEST
geolib:
	$(GCC) $(CCFLAGS) -o build/geolib.o test.c $(SRC) 
