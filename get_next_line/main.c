#include "get_next_line.h"

int main(void)
{
    int fd;
    char *line;
    fd = open("example.txt", O_RDONLY);
    if (fd < 0)
    {
        perror("Error opening file");
        return (1);
    }
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("Line: %s \n", line);
        free(line);
    }
    close(fd);
    return (0);
}
