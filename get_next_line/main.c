#include "get_next_line.h"
void ff()
{
    system("leaks a.out");
}
// int main(void)
// {
//     //atexit(ff);
//     int fd;
//     char *line;
//     fd = open("txt", O_RDONLY);
//     // if (fd < 0)
//     // {
//     //     perror("Error opening file");
//     //     return (1);
//     // }
//     while ((line = get_next_line(fd)) != NULL)
//     {
//         printf("Line: %s\n", line);
//         free(line);
//     }
//     close(fd);
//     return (0);
// }

int main()
{
    //atexit(ff);
    int fd;
    fd = open("txt" , O_RDONLY);
    char *test ;
    while ((test = get_next_line(fd)) != NULL)
    {
        printf("Line: %s\n", test);
        free(test);
    }
    printf("%s", test);
    free(test);
}
