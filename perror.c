/*
 * perror.c
 *
 * convert error number to string.
 *
 * git access: https://github.com/changbindu/perror.git
 *
 * Copyright (C) 2012 - changbin <changbin.du@gmail.com>
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>


void list_errs(void)
{
	
	printf("Todo: function is not implemented!\n");
}

/* usage: perror <error> */
int main(int argc, char **argv)
{
	int	err_no = 0;
	int	c = 0;

	while ((c = getopt (argc, argv, "lh")) != EOF)
	switch (c) {
	case 'l':
		list_errs();
		return 0;
	case '?':
	case 'h':
	default:
usage:
		printf("Usage: perror <errno>\n"
		       "Options:\n"
		       "	-l	list all defined errors\n"
		       "	-h	this help\n"
		       "note: errno must be a positive integer\n");
		return 0;
	}

	if (optind < argc)
		err_no = atoi(argv[optind]);
	else
		goto usage;

	err_no = abs(err_no);
	printf("%d: %s\n", err_no, strerror(err_no));

	return 0;
}

