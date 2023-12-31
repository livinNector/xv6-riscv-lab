#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

char c;
void head(int fd, int n_lines)
{
    int n;
    int line_count = 0;
    while ((n = read(fd, &c, 1)) > 0)
    {
        if (write(1, &c, 1) != n)
        {
            fprintf(2, "head: write error\n");
            exit(1);
        }
        if (c == '\n')
        {
            line_count++;
        }

        if (line_count >= n_lines)
        {
            break;
        }
    }
    if (n < 0)
    {
        fprintf(2, "head: read error\n");
        exit(1);
    }
}

int main(int argc, char *argv[])
{
    int fd;

    if (argc <2 || argc >3)
    {
        fprintf(2, "usage: head file_path [n_lines]\n");
        exit(1);
    }
    int n_lines = 10;
    if (argc ==3){
        n_lines = atoi(argv[2]);
    }
    
    if ((fd = open(argv[1], 0)) < 0)
    {
        fprintf(2, "head: cannot open %s\n", argv[1]);
        exit(1);
    }
    head(fd,n_lines);
    close(fd);
    exit(0);
}