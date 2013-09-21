SOURCES = main.c Lingo.c FileReader.c

TARGET = Lingo

CC = gcc

all: lingo

lingo: $(SOURCES) $(TARGET)
	$(CC) $(SOURCES) -o $(TARGET) 

clean:
	rm -rf $(TARGET) 


