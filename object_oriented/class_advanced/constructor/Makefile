main:main.o test.o 
	g++ -o main main.o test.o 

main.o:main.cpp test.h 
	g++ -c main.cpp 

test.o:test.cpp test.h 
	g++ -c test.cpp 

clean:
	rm main.o test.o 
