# Makefile for reading in a gml file and storing as a linked list
# Sharlee Climer
# March 2019


CC	= g++
CFLAGS 	= -g
TARGET	= readGML
OBJS	= readGML.o network.o

$(TARGET):	$(OBJS)
		$(CC) -o $(TARGET) $(OBJS)

readGML.o:	readGML.cpp readGML.h timer.h
		$(CC) $(CFLAGS) -c readGML.cpp

network.o:	network.cpp network.h
		$(CC) $(CFLAGS) -c network.cpp

clean:
		/bin/rm -f *.o saveCompSizes.txt newGMLFile.gml bfs.txt $(TARGET)
