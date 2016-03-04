all: hugemouse.c altermouse.h
	gcc -Wall -o hugemouse hugemouse.c -framework ApplicationServices

clean:
	rm -f hugemouse
