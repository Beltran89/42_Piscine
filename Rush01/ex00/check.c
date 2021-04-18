
void checkif(char *argv);

void *check(char *argv)
{
    int i;
    int c;
    int x;
    i = 0;
    c = 0;
    x = 0;
    char ck[16];
    while (x < 16)
    {
        while(argv[i] != '\0')
        {
            if (argv[i] != ' ')
                {
                    ck[c] = argv[i];
                    c++;
                } 
                i++;
        }
        x++;
    }
    checkif(ck);

}

