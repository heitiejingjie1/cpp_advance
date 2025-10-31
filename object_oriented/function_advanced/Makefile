main:main.o overload.o encapsulation_inlining_func.o 
	g++ -o main main.o overload.o encapsulation_inlining_func.o 

main.o:main.cpp overload.h 
	g++ -c main.cpp 

overload.o:overload.cpp overload.h 
	g++ -c overload.cpp 

encapsulation_inlining_func.o:encapsulation_inlining_func.cpp encapsulation_inlining_func.h 
	g++ -c encapsulation_inlining_func.cpp 

clean:
	rm main.o overload.o encapsulation_inlining_func.o  
