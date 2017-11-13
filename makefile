all: parse_args.c
	gcc parse_args.c -o parse_args -g
run: all
	./parse_args
clean:
	rm -f *~
	rm -f *.o
