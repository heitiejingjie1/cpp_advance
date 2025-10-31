main:main.o box.o advanced_functions.o student.o  
	g++ -o main main.o box.o advanced_functions.o 

main.o:main.cpp box.h 
	g++ -c main.cpp 

box.o:box.cpp box.h 
	g++ -c box.cpp 

advanced_functions.o:advanced_functions.cpp advanced_functions.h 
	g++ -c advanced_functions.cpp 

student.o:student.cpp student.h 
	g++ -c student.cpp 

clean:
	rm main.o box.o advanced_functions.o student.o 

