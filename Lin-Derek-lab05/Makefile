FLAGS = -Wall -pedantic-errors

all: firstline lastline longestline

compile: firstline lastline longestline

firstline: firstline.c
	gcc -o firstline $(FLAGS) firstline.c

lastline: lastline.c
	gcc -o lastline $(FLAGS) lastline.c

longestline: longestline.c
	gcc -o longestline $(FLAGS) longestline.c

clean:
	rm -f firstline
	rm -f lastline
	rm -f longestline
