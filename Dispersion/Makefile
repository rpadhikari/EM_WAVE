FC=gcc -c
LD=gcc
SRC=Reew.c Imew.c main.c
OBJ=Reew.o Imew.o main.o
dispersion:
	$(FC) $(SRC)
	$(LD) $(OBJ) -o dispersion.x -lm
	rm -rf *.o
clean:
	rm -rf *.o dispersion.x data.dat

