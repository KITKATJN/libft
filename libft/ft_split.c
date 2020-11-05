#include "libft.h"

static size_t	c_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	left;

	i = 0;
	left = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && left > 0)
		{
			left = 0;
			count++;
		}
		if (s[i] != c)
		{
			left++;
		}
		i++;
	}
	if (count == 0 && left > 0)
		return (1);
	return (count);
}
/*
static size_t c_words(char const *s, char c)
{
	int i;
	size_t word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
		{
			i++;
			if ((s[i] == c) || (s[i + 1] == '\0'))
			{
				word++;
				break ;
			}
		}
		i++;
	}
	return (word);
}
*/
static char	**my_free(char **s, size_t i)
{
	size_t j;
	
	j = 0;
	if (s)
	{
		while (j < i)
		{
			free(s[j]);
			j++;
		}	
		free(s);
	}
	return (s);
}

static size_t	skip_c(const char *s, int c)
{
	size_t i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char **ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	str = (char**)malloc(c_words(s,c) + 1);
	if (str)
	{
		i = 0;
		j = 0;
		while (i < c_words(s,c))
		{
			while (s[j] == c)
				j++;
			str[i] = ft_substr(s, j, skip_c(s + j, c));
			if (str[j] == 0)
				return (my_free(str, i));
			j = j + skip_c(s + j, c);
			i++;
		}
		str[i] = 0;
	}
	return (str);
}







