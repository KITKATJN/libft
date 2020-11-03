#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	c;
	size_t	i;
	size_t	j;

	if (s && f)
	{
		str = malloc(ft_strlen(s) + 1);
		if (str)
		{
			i = 0;
			j = 0;
			while (s[j] != '\0')
			{
				c = f(j, s[j]);
				if (c)
					str[i++] = c;
			       j++;  
			}
			str[i] = '\0';
			return (str);
		}
	}
	return (0);
}
