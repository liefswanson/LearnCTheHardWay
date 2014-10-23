compiler= gcc
cflags=-Wall -g

srcdir=../ex01

srcs=hello.c
objs=$(srcs:.c=.o)
exe=hello

all: $(srcs) $(exe)

$(EXECUTABLE): $(objs) 
	$(compiler) $(objs) -o $@

.c.o:
	$(compiler) $(cflags) $< -o $@

debug:
	echo $(srcs)
	echo $(objs)

clean:
	rm -f $(objs) $(exe)
