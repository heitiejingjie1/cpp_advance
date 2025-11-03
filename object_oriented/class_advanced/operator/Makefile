main:main.o operator_demo.o 
	g++ -o main main.o operator_demo.o 

main.o:main.cpp operator_demo.h 
	g++ -c main.cpp 

operator_demo.o:operator_demo.cpp operator_demo.h 
	g++ -c operator_demo.cpp 

clean:
	rm main.o operator_demo.o 
