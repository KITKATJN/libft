#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int i;
	int j;
	int minus;

	i = 0;
	j = 0;
	minus = 1;
	if (nptr[0] == '-')
	{
		minus = (-1);
		i = 1;
	}
	while (nptr[i] != '\0')
	{
		j = (j * 10) + (nptr[i] - 48);
		i++;	
	}
	return (j * minus);
}
