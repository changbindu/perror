perror : perror.c
	gcc $^ -o $@ -g

install : perror
	cp perror /bin/

clean :
	-rm perror
