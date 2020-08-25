
OBJS = main.o 

CFLAGS = -Wall -Wno-strict-aliasing -std=c11 -g -I. -O0
override CFLAGS += -DBUILD_DIR='"$(shell pwd)"'

all: $(OBJS)
	clang -o zchip $(OBJS) $(LDFLAGS)

clean: 
	rm -f *.o

