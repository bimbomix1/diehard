CFLAGS=-Wall -std=c99

diehard: main.o
	gcc $(CFLAGS) main.o -o start.o
	./start.o

test: test_base.o dh.o CuTest.o
	gcc $(CFLAGS) dh.o test_base.o CuTest.o -o test.o
	./test.o
	
clean:
	rm -rf *.o


# CFLAGS=-Wall -std=c99
# 
# OBJECTS=structure.o
# OBJECTS_PRODUCTION= $(OBJECTS) main.o 
# OBJECTS_TEST=$(OBJECTS) test_structure.o
# 
# diehard: base.o mosaico.o
# 	gcc $(CFLAGS) base.o mosaico.o -o start.o
# 	./start.o
# 
# base: base.o
# 	gcc $(CFLAGS) base.c -o base.o
# 
# test_base:  test_base.o base.o
# 		gcc $(CFLAGS) base.o test_base.o cgreen/cgreen.a -o test_base_structure.o
# 		./test_base_structure.o
# 		
# test: test_base test_structure
# 
# 	
# 	
# clean:
# 	rm -rf *.o
