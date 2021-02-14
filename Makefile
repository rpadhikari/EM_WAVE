FC=gcc -c
LD=gcc
SRC=refl.c trans.c main.c
OBJ=refl.o trans.o main.o
em:
	$(FC) $(SRC)
	$(LD) $(OBJ) -o em.x -lm
	rm -rf *.o
clean:
	rm -rf *.o em.x

