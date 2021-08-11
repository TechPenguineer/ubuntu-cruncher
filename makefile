exec = cruncher
sources = $(wildcard src/*.c)
objects = $(sources:.c=.o)
flags = -g


$(exec): $(objects)
	gcc $(objects) $(flags) -o $(exec)

%.o: %.c include/%.h
	sudo cp ./$(exec) /usr/local/bin/$(exec)

clean:
	-rm cruncher
	-rm src/*.o
	sudo rm /usr/local/bin/$(exec)