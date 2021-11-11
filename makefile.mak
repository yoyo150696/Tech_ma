CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LOOPS=advancedClassificationLoop.o basicClassification.o
OBJECTS_REC=advancedClassificationRecursion.o basicClassification.o
FLAGS=-Wall -g

all:looped loops recursives recursived mains maindloop maindrec
mains:$(OBJECTS_MAIN) libclassrec.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a -lm
maindloop:$(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so
maindrec: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so
loops: $(OBJECTS_LOOPS) 
	$(AR) -rcs libclassloops.a $(OBJECTS_LOOPS) -lm	
looped: $(OBJECTS_LOOPS)
	gcc -shared -o libclassloops.so basicClassification.o -lm	
recursives: $(OBJECTS_REC)
	$(AR) -rcs libclassrec.a $(OBJECTS_REC) -lm
recursived: $(OBJECTS_REC)
	$(CC) -o libclassloops.so $(OBJECTS_REC) -lm
main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c -lm
advancedClassificationRecursion.o:advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c -lm
advancedClassificationLoop.o:advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c -lm
basicClassification.o:basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c


clean:
	rm -f *.o *.a *.so mains maindrec maindloop
