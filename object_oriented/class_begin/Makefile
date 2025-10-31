main:main.o begin.o 
	g++ -o main main.o begin.o 

main.o:main.cpp begin.h 
	g++ -c main.cpp 

begin.o:begin.cpp begin.h 
	g++ -c begin.cpp 

clean:
	rm main.o begin.o 
