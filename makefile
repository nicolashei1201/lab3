code2: Clock.o code2.o
	g++ -o Clock code2.o Clock.o
Clock.o: Clock.cpp Clock.h
	g++ -c Clock.cpp
code2.o: code2.cpp Clock.h
	g++ -c code2.cpp
code1:
	g++ code1.cpp
clean:
	rm Clock.cpp *.o
