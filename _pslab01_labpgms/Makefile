#*****************************************************
#Makefile
#CFLAGS = -Wall
#*****************************************************
CC = g++
CFLAGS = -g -std=c++11
main = ifthen_exercises
#****************************************************
#targets needed to bring the executable up to date
 
$(main).exe: $(main).o
	$(CC) -o $(main).exe $(main).o
 
$(main).o: $(main).cpp
	$(CC) $(CFLAGS) -c $(main).cpp
 
clean:
	-rm -v *.o
	-rm -v *~
 
clobber:
	-rm -v *.o
	-rm -v *~
	-rm -v *.exe
