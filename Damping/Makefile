FC=gcc -c
LD=gcc
SRC=amplitude.c main.c
OBJ=amplitude.o main.o
amplitude:
	$(FC) $(SRC)
	$(LD) $(OBJ) -o amplitude.x -lm
	rm -rf *.o
clean:
	rm -rf *.o amplitude.x data.dat

