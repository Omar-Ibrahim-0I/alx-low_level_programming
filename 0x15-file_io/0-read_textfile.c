#include <stdio.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp = fopen(filename, "r");
	ssize_t i = 0, read_size = 0;
	char *buffer = malloc(sizeof(char) * letters);

	if (fp == NULL)
		return (0);
	while (!feof(fp))
	{
		read_size = fread(&buffer[i], sizeof(char), 1, fp);
		if (read_size == 0)
			break;
		i += read_size;
	}

	printf("%s", buffer);
	free(buffer);
	fclose(fp);
	return (i);
}
