compiler=gcc
cflags=-Wall -g

srcs=ex04.c
objs=$(srcs:.c=.o)
exe=ex04

all: $(srcs) $(exe)

$(exe): $(objs)
	cp $(exe).o $(exe)
#	$(compiler) $(objs) -o $@

.c.o:
	$(compiler) $(cflags) $< -o $@

debug:
	echo $(srcs)
	echo $(objs)

clean:
	rm -f $(objs) $(exe)
