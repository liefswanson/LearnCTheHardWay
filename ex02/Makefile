compiler= gcc
cflags=-Wall -g

srcs=hello.c
objs=$(srcs:.c=.o)
exe=hello

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
