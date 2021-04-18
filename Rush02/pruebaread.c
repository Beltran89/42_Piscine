#include<unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int sz;
    int fd;
    size_t count;

    fd = open("numbers.dict", O_RDONLY);
    printf("%d \n", fd);
    char *c;

    c = (char *)malloc(1);
    if (fd == -1)
        printf("error");
    
    count= 65535;
    sz = read(fd, c, count);
    //printf("Called read(%d , c, 10)")
    //c[sz] = '\0';
    printf("thouse ite %c\n", c[10]);

    int x;
    x =0;
    while (c[x] == str)
        {
            //c++;
            x++;
        }
    printf("%c\n", c[x]-10);
    int i=x;
    printf("%d -- VALOR DE X\n", x)
    while(c[x] != '\n')
        {
            x++;
            printf("%c", c[x]);
        }

    

}