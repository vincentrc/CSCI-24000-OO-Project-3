Driver.o: *.cpp *.h
	g++ -o made *.h *.cpp
run: Driver.o
	./made
clean:
	rm -f made
