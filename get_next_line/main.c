#include <stdio.h>
#include "get_next_line.h"

int main(int argc, char **argv)
{
	int fd = open(argv[1], O_RDONLY);
	char *line = NULL;
	while(get_next_line(fd, &line)>0)
	{
		printf("%s\n", line);
	}
	get_next_line(fd, &line);
	printf("%s", line);
	return (0);
}
