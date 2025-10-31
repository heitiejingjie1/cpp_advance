main: main.o string.o vector.o array.o iterator.o
	g++ -o main main.o string.o vector.o array.o iterator.o 

main.o:main.cpp string.h vector.h array.h 
	g++ -c main.cpp 

string.o:string.cpp string.h 
	g++ -c string.cpp 

vector.o:vector.cpp vector.h 
	g++ -c vector.cpp  

array.o:array.cpp array.h 
	g++ -c array.cpp 

iterator.o:iterator.cpp iterator.h 
	g++ -c iterator.cpp 

clean:
	rm main.o string.o vector.o array.o iterator.o

