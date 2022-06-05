all:output

output:webseries.o movie.o account.o DATA.o run.o
	g++ webseries.o movie.o account.o DATA.o run.o -o output

webseries.o:webseries.h webseries.cpp
	g++ -c webseries.cpp

movie.o:movie.h movie.cpp
	g++ -c movie.cpp

account.o:account.h account.cpp
	g++ -c account.cpp

run.o:run.cpp
	g++ -c run.cpp

DATA.o:DATA.h DATA.cpp
	g++ -c DATA.cpp

clean:
	rm -rf *o output