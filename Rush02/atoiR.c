/*#include<stdio.h>
#include<stdlib.h>
*/
#include "libreriaRush.h"

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v' || c == '\f' || c == '\r')
		return 1;
	return 0;
}

int		ft_atoi(char *str)
{
	int i;
	char isN;
	char bool;
	int final;

	i = 0;
	isN = 0;
	bool = 0;
	final = 0;
	while(str[i] != '\0')
	{
		if (isN == 0 && str[i] == '-')
		{
			isN = 1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			final *= 10;
			final += str[i] - 48;

			if (ft_isspace(str[i + 1]) ==  1)
				break ;
		}
		else if (ft_isspace(str[i]) == 0)
			break ;
		
		i++;
	}

	if (isN > 0)
		final *= -1;

	return final;
}

/*
int		main()
{
	char *str = "-42";

	printf("mine > %d\n", ft_atoi(str));
	printf("atoi > %d\n", atoi(str));
}
*/