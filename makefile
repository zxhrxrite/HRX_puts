hello: hello.c ./HRX_puts.so
	gcc -o hello hello.c ./HRX_puts.so
HRX_puts.so: HRX_puts.c
	gcc -fPIC -shared -o HRX_puts.so ./HRX_puts.c
