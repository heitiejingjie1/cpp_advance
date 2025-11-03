main:main.o extend.o 
	g++ -o main main.o extend.o 

main.o:main.cpp extend.h 
	g++ -c main.cpp 

extend.o:extend.cpp extend.h 
	g++ -c extend.cpp 

clean:
	rm main.o extend.o 
