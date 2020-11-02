#include "libft.h"


int	ft_atoi(const char *nptr)
{
	int i;
	long j;
	int minus;

	i = 0;
	j = 0;
	minus = 1;
	while (nptr[i] == ' ' || nptr[i] == '	' || nptr[i] == '\n' || nptr[i] == '\t' || nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == '\v')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			minus = (-1);
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		j = (j * 10) + (nptr[i] - 48);
		i++;	
	}
	return ((int)(j * minus));
}
