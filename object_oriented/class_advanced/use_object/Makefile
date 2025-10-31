main:main.o static_demo.o 
	g++ -o main main.o static_demo.o 

main.o:main.cpp static_demo.h 
	g++ -c main.cpp 

static_demo.o:static_demo.cpp static_demo.h 
	g++ -c static_demo.cpp 

clean:
	rm main.o static_demo.o 
