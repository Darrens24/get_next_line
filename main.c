#include "get_next_line.h"

int main()
{
    int     fd = open("42", O_RDONLY);
    char    *nextline;
    int     i = 0;

    while (i < 7)
    {
        nextline = get_next_line(fd);
        if (nextline == NULL)
            break;   
        printf("new line = %s", nextline) ;
        free(nextline);
        i++;
    }
    return (0);
}