
row_leftCom(char *argv);


void checkif(char *argv)
{
    if ((argv[0]==argv[8] || argv[3]== argv[12]) && (argv[4] ==argv[11] || argv[7] == argv[15]))
    {

        row_leftCom(argv);
    }

    else if ((argv[4] == argv[11]) && (argv[7]==argv[15]))
    {

        row_leftCom(argv);
    }
    else if (argv[0] == argv [8] && argv[3]==argv[12])
    {

        row_leftCom(argv);
    }
    else
    {
        printf("Error");
    }

}