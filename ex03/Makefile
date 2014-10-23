compiler= gcc
cflags=-Wall -g

srcs=ex03.c
objs=$(srcs:.c=.o)
exe=ex03

all: $(srcs) $(exe)

#the exe already exists because we are only compiling one file. This means we just have to change it from being named as an obkect to having no extension
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
