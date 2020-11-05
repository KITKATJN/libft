#include "libft.h"

static int	ft_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return(1);
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*Toss_a_coin_to_the_witcher(int n)
{
	size_t	len;
	char	*str;
	size_t	lutic;
	
	len = ft_len(n);
	lutic = 1;
	if (n < 0)
		lutic++;
	str = malloc(len + lutic);
	return (str);

}

char	*ft_itoa(int n)
{
	size_t	i;
	size_t	len;
	char	*str;
	long	j;

	j = n;
	len = ft_len(n);
	str = Toss_a_coin_to_the_witcher(n);
	if (str)
	{	
		i = 0;
		while (j != 0)
		{
			if (j < 0)
				str[i++] = '-';
			str[i++] = j / (10 * (len - 1));
			j = j % (10 * (len - 1));
			len--;
		}
		str[i] = '\0';
		return (str);
	}
	return (0);
}
