#include "libft.h"

static char	*ft_strchr1(const char *s, int c)
{
	int		i;
	
	i = 0;
	if (c == '\0')
	{
		while (s[i] != '\0')
		{
			i++;
		}
		return ((char*)(s + i));
	}
	return (ft_memchr(s,c, ft_strlen((char*)s)));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	right;
	size_t	left;

	left = 0;
	if(!s1)
		return (0);
	while (s1[left] && ft_strchr1(set, s1[left]))
		left++;
	right = ft_strlen(s1) - 1;
	while (right > left && ft_strchr1(set, s1[right]))
		right--;
	str = malloc(right - left + 1);
	if (!str)
		return (0);
	i = 0;
	while (left < right)
	{
		str[i] = s1[left];
		i++;
		left++;
	}
	str[i] = '\0';
	return (str);
}

/*
static int	check(const char *set, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			j = 1;
		i++;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t 	len;

	i = 0;
	if (!s1)
		return (0);
	while (check(set,s1[i]))
		i++;
	j = ft_strlen((char*)s1) - 1;
	while (check(set, s1[j]))
		j--;
	len = j - i + 1;
	str = malloc(len);
	if (str)
	{
		str = ft_memccpy(str, s1,'\0',len);
		str[len] = '\0';
		return (str);
	}
	return (0);
}*/
