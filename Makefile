CC=gcc
CXX=$(CC)
CFLAGS=-std=c99
CXXFLAGS=$(CFLAGS)

LD=gcc
LXX=$(LD)
LDFLAGS=-lncurses
LXXFLAGS=$(LDFLAGS)

BIN=otushiddump

.PHONY: clean all

all: $(BIN)

clean:
	rm -f $(BIN) *.o

otushid.o: otushid.c otushid.h
	$(CC) $(CFLAGS) -c -o otushid.o otushid.c

otushid: otushid.c otushid.h
	$(CC) $(CFLAGS) -DTEST -o otushid otushid.c

otushiddump: otushid.c otushid.h
	$(CC) $(CFLAGS) -DTEST -o otushiddump otushid.c

#otushidgui.o: otushidgui.c otushid.h
#	$(LD) $(CFLAGS) -c -o otushidgui.o otushidgui.c

#otushidgui: otushidgui.o otushid.o
#	$(LD) $(LDFLAGS) -o otushidgui otushidgui.o otushid.o
	
#otus2midi.o: otus2midi.c otushid.h
#	$(LD) $(CFLAGS) -c -o otus2midi.o otus2midi.c

#otus2midi: otus2midi.o otushid.o
#	$(LD) $(LDFLAGS) -o otus2midi otus2midi.o otushid.o



