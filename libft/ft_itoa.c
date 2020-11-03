#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	i;
	size_t	len;
	char	*str;
	long	j;

	j = n;
	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	str = malloc(len);
	if (str)
	{	
		i = 0;
		while (j != 0)
		{
			if (j < 0)
			{
				str[i] = '-';
				i++;
			}
			str[i] = j / (10 * (len - 1));
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (0);

}
