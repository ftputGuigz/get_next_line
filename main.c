
#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main()
{
	char *line;
	int fd;
	int i;

	fd = open("text.txt", O_RDONLY);
	while ((i = get_next_line(fd, &line)) > 0)
	{
		printf("%s\n", line);
		printf("%i\n", i);
	}
	printf("%s\n", line);
	printf("%i\n", i);
	return (0);
}

