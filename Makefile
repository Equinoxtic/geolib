# Flags (Main)
# -DQUICK_TEST
# -DIODEBUG

# Flags (Testing)
# -DTEST_MULTIOPERATION
# -DTEST_GEOMFORMS
# -DTEST_GEOSHAPES
# -DTEST_NEGANDPOS
# -DTEST_SLEEP
# -DTEST_GEOMFORMP
# -DTEST_GEOSHAPEP
# -DTEST_LIBSTRING
# -DTEST_GIO
# -DTEST_INFOLIB
# -DTEST_CLIGUI
# -DTEST_DEPSHAPES

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

CCFLAGS= -DQUICK_TEST -DTEST_INFOLIB

geolib:
	$(GCC) $(CCFLAGS) -o build/geolib.o test.c $(SRC) 
